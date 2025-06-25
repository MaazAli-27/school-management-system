#include "AttendanceManagement.h"
#include "ui_AttendanceManagement.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QInputDialog>
#include <QKeyEvent>

AttendanceManagement::AttendanceManagement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AttendanceManagement),
    model(new QSqlQueryModel)
{
    ui->setupUi(this);
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(Qt::Dialog | Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
    setAttribute(Qt::WA_DeleteOnClose);

    connect(ui->searchBar, &QLineEdit::textChanged, this, &AttendanceManagement::onSearchTextChanged);
    connect(ui->markAttendanceButton, &QPushButton::clicked, this, &AttendanceManagement::markAttendance);
    connect(ui->attendanceTypeComboBox, &QComboBox::currentTextChanged, this, &AttendanceManagement::loadAttendanceRecords);
    loadAttendanceRecords();
}

AttendanceManagement::~AttendanceManagement() {
    delete ui;
    delete model;
}

void AttendanceManagement::loadAttendanceRecords() {
    QString type = ui->attendanceTypeComboBox->currentText();  // "Student" or "Teacher"
    updateTable(type);
}

void AttendanceManagement::updateTable(const QString &type) {
    QSqlQuery query;

    if (type == "Student") {
        query.prepare("SELECT sa.student_id, s.name AS student_name, sa.class_name, sa.date, sa.status "
                      "FROM student_attendance sa "
                      "JOIN students s ON sa.student_id = s.id "
                      "ORDER BY sa.date DESC");
    } else {
        query.prepare("SELECT ta.teacher_id, t.name AS teacher_name, ta.course_name, ta.date, ta.status "
                      "FROM teacher_attendance ta "
                      "JOIN teachers t ON ta.teacher_id = t.id "
                      "ORDER BY ta.date DESC");
    }


    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to load attendance records: " + query.lastError().text());
        return;
    }
    model->setQuery(query);
    ui->attendanceTable->setModel(model);

    // Set column headers dynamically
    model->setHeaderData(0, Qt::Horizontal, (type == "Student") ? "Student ID" : "Teacher ID");
    model->setHeaderData(1, Qt::Horizontal, (type == "Student") ? "Student Name" : "Teacher Name");
    model->setHeaderData(2, Qt::Horizontal, (type == "Student") ? "Class" : "Subject");
    model->setHeaderData(3, Qt::Horizontal, "Date");
    model->setHeaderData(4, Qt::Horizontal, "Status");
}

void AttendanceManagement::markAttendance() {
    QString type = ui->attendanceTypeComboBox->currentText();  // "Student" or "Teacher"

    bool ok;
    int personId = QInputDialog::getInt(this, "Mark Attendance",
                                        QString("Enter %1 ID:").arg(type),
                                        1, 1, 9999, 1, &ok);
    if (!ok) return;

    // Check if the ID exists and get additional info
    QSqlQuery checkQuery;
    QString personName, classOrCourseName;

    if (type == "Student") {
        checkQuery.prepare("SELECT name, class FROM students  WHERE id = :id");
    } else {
        checkQuery.prepare("SELECT name, subject FROM teachers  WHERE id = :id");
    }

    checkQuery.bindValue(":id", personId);

    if (!checkQuery.exec() || !checkQuery.next()) {
        QMessageBox::warning(this, "Error", QString("%1 ID does not exist.").arg(type));
        return;
    }

    personName = checkQuery.value(0).toString();
    classOrCourseName = checkQuery.value(1).toString(); // Getting class/course

    // Select Attendance Status
    QString status = QInputDialog::getItem(this, "Mark Attendance",
                                           "Select Status:", {"Present", "Absent"}, 0, false, &ok);
    if (!ok) return;

    // Insert attendance record
    QSqlQuery query;
    if (type == "Student") {
        query.prepare("INSERT INTO student_attendance (student_id,  class_name, date, status) "
                      "VALUES (:id, :class, CURDATE(), :status)");
        query.bindValue(":class", classOrCourseName);
    } else {
        query.prepare("INSERT INTO teacher_attendance (teacher_id, course_name, date, status) "
                      "VALUES (:id, :course, CURDATE(), :status)");
        query.bindValue(":course", classOrCourseName);
    }

    query.bindValue(":id", personId);
    query.bindValue(":name", personName);
    query.bindValue(":status", status);

    if (query.exec()) {
        QMessageBox::information(this, "Success", QString("Attendance marked for %1 (%2) - %3 as %4!")
                                     .arg(personName).arg(personId).arg(type == "Student" ? "Class" : "Subject").arg(classOrCourseName).arg(status));
        loadAttendanceRecords();
    } else {
        QMessageBox::critical(this, "Error", "Failed to mark attendance: " + query.lastError().text());
    }
}

void AttendanceManagement::onSearchTextChanged(const QString &text) {
    QString type = ui->attendanceTypeComboBox->currentText();  // "Student" or "Teacher"

    QSqlQuery query;
    if (type == "Student") {
        query.prepare("SELECT sa.student_id, s.name AS student_name, sa.date, sa.status "
                      "FROM student_attendance sa "
                      "JOIN students s ON sa.student_id = s.id "
                      "WHERE sa.student_id LIKE :search OR s.name LIKE :search "
                      "ORDER BY sa.date DESC");
    } else {
        query.prepare("SELECT ta.teacher_id, t.name AS teacher_name, ta.date, ta.status "
                      "FROM teacher_attendance ta "
                      "JOIN teachers t ON ta.teacher_id = t.id "
                      "WHERE ta.teacher_id LIKE :search OR t.name LIKE :search "
                      "ORDER BY ta.date DESC");
    }
    query.bindValue(":search", "%" + text + "%");

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to search attendance records: " + query.lastError().text());
        return;
    }

    model->setQuery(std::move(query));
    ui->attendanceTable->setModel(model);
}
void AttendanceManagement::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        close();  // Closes the Attendance Management window
    } else {
        QWidget::keyPressEvent(event);  // Passes other key presses to the parent class
    }
}

