#include "ExamManagement.h"
#include "ui_ExamManagement.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QInputDialog>
#include <QKeyEvent>

ExamManagement::ExamManagement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExamManagement),
    model(new QSqlQueryModel)
{
    ui->setupUi(this);
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(Qt::Dialog | Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
    setAttribute(Qt::WA_DeleteOnClose);

    connect(ui->searchBar, &QLineEdit::textChanged, this, &ExamManagement::onSearchTextChanged);
    connect(ui->addButton, &QPushButton::clicked, this, &ExamManagement::addExam);
    connect(ui->editButton, &QPushButton::clicked, this, &ExamManagement::editExam);
    connect(ui->removeButton, &QPushButton::clicked, this, &ExamManagement::removeExam);
    loadExamRecords();
}

ExamManagement::~ExamManagement()
{
    delete ui;
    delete model;
}

void ExamManagement::loadExamRecords()
{
    updateTable();
}

void ExamManagement::updateTable()
{
    QSqlQuery query;
    query.prepare("SELECT id, class_name, subject, exam_date, start_time, end_time, invigilator, room FROM exam_management ORDER BY id ASC");

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to load exam records: " + query.lastError().text());
        return;
    }

    model->setQuery(std::move(query));
    ui->examTable->setModel(model);

    model->setHeaderData(0, Qt::Horizontal, "Exam ID");
    model->setHeaderData(1, Qt::Horizontal, "Class");
    model->setHeaderData(2, Qt::Horizontal, "Subject");
    model->setHeaderData(3, Qt::Horizontal, "Exam Date");
    model->setHeaderData(4, Qt::Horizontal, "Start Time");
    model->setHeaderData(5, Qt::Horizontal, "End Time");
    model->setHeaderData(6, Qt::Horizontal, "Invigilator");
    model->setHeaderData(7, Qt::Horizontal, "Room");
}
bool ExamManagement::doesInvigilatorExist(const QString &invigilatorName) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM teachers WHERE name = :name");
    query.bindValue(":name", invigilatorName);

    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}

void ExamManagement::addExam()
{
    bool ok;
    QString className = QInputDialog::getText(this, "Add Exam", "Enter Class:", QLineEdit::Normal, "", &ok);
    if (!ok || className.isEmpty()) return;

    QString subject = QInputDialog::getText(this, "Add Exam", "Enter Subject:", QLineEdit::Normal, "", &ok);
    if (!ok || subject.isEmpty()) return;

    QString examDate = QInputDialog::getText(this, "Add Exam", "Enter Exam Date (YYYY-MM-DD):", QLineEdit::Normal, "", &ok);
    if (!ok || examDate.isEmpty()) return;

    QString startTime = QInputDialog::getText(this, "Add Exam", "Enter Start Time (HH:MM:SS):", QLineEdit::Normal, "", &ok);
    if (!ok || startTime.isEmpty()) return;

    QString endTime = QInputDialog::getText(this, "Add Exam", "Enter End Time (HH:MM:SS):", QLineEdit::Normal, "", &ok);
    if (!ok || endTime.isEmpty()) return;

    QString invigilator = QInputDialog::getText(this, "Add Exam", "Enter Invigilator Name:", QLineEdit::Normal, "", &ok);
    if (!doesInvigilatorExist(invigilator)) {
        QMessageBox::warning(this, "Error", "Invigilator does not exist in the teacher database.");
        return;
    }

    QString room = QInputDialog::getText(this, "Add Exam", "Enter Room Number:", QLineEdit::Normal, "", &ok);
    if (!ok || room.isEmpty()) return;

    QSqlQuery query;
    query.prepare("SELECT MIN(t1.id + 1) AS missing_id FROM exam_management t1 "
                  "LEFT JOIN exam_management t2 ON t1.id + 1 = t2.id "
                  "WHERE t2.id IS NULL");

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to find missing ID: " + query.lastError().text());
        return;
    }

    int examId = 1; // Default if table is empty
    if (query.next()) {
        int missingId = query.value(0).toInt();
        if (missingId > 0) {
            examId = missingId; // Use missing ID if available
        } else {
            // Get the next available ID
            QSqlQuery maxQuery;
            maxQuery.prepare("SELECT MAX(id) FROM exam_management");
            if (maxQuery.exec() && maxQuery.next()) {
                examId = maxQuery.value(0).toInt() + 1;
            }
        }
    }

    query.prepare("INSERT INTO exam_management (id,class_name, subject, exam_date, start_time, end_time, invigilator, room) "
                  "VALUES (:id,:class_name, :subject, :exam_date, :start_time, :end_time, :invigilator, :room)");
    query.bindValue(":id",examId);
    query.bindValue(":class_name", className);
    query.bindValue(":subject", subject);
    query.bindValue(":exam_date", examDate);
    query.bindValue(":start_time", startTime);
    query.bindValue(":end_time", endTime);
    query.bindValue(":invigilator", invigilator);
    query.bindValue(":room", room);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Exam added successfully!");
        loadExamRecords();
    } else {
        QMessageBox::critical(this, "Error", "Failed to add exam: " + query.lastError().text());
    }
}

void ExamManagement::editExam()
{
    int examId = QInputDialog::getInt(this, "Edit Exam", "Enter Exam ID to edit:");

    QSqlQuery query;
    query.prepare("SELECT * FROM exam_management WHERE id = :id");
    query.bindValue(":id", examId);

    if (!query.exec() || !query.next()) {
        QMessageBox::warning(this, "Error", "Exam ID does not exist.");
        return;
    }

    QString className = QInputDialog::getText(this, "Edit Exam", "Enter Class Name:", QLineEdit::Normal, query.value(1).toString());
    QString subject = QInputDialog::getText(this, "Edit Exam", "Enter Subject:", QLineEdit::Normal, query.value(2).toString());
    QString invigilator = QInputDialog::getText(this, "Edit Exam", "Enter Invigilator:", QLineEdit::Normal, query.value(3).toString());
    QString examDate = QInputDialog::getText(this, "Edit Exam", "Enter Exam Date:", QLineEdit::Normal, query.value(4).toString());
    QString startTime = QInputDialog::getText(this, "Edit Exam", "Enter Start Time:", QLineEdit::Normal, query.value(5).toString());
    QString endTime = QInputDialog::getText(this, "Edit Exam", "Enter End Time:", QLineEdit::Normal, query.value(6).toString());
    QString room = QInputDialog::getText(this, "Edit Exam", "Enter Room:", QLineEdit::Normal, query.value(7).toString());

    if (!doesInvigilatorExist(invigilator)) {
        QMessageBox::warning(this, "Error", "Invigilator does not exist.");
        return;
    }

    query.prepare("UPDATE exam_management SET class_name = :class, subject = :subject, invigilator = :invigilator, exam_date = :date, start_time = :start, end_time = :end, room = :room WHERE id = :id");
    query.bindValue(":class", className);
    query.bindValue(":subject", subject);
    query.bindValue(":invigilator", invigilator);
    query.bindValue(":date", examDate);
    query.bindValue(":start", startTime);
    query.bindValue(":end", endTime);
    query.bindValue(":room", room);
    query.bindValue(":id", examId);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Exam updated successfully.");
        updateTable();
    } else {
        QMessageBox::critical(this, "Error", "Failed to update exam: " + query.lastError().text());
    }
}


void ExamManagement::removeExam()
{
    bool ok;
    int examId = QInputDialog::getInt(this, "Remove Exam", "Enter Exam ID to remove:", 1, 1, 9999, 1, &ok);
    if (!ok) return;

    QSqlQuery query;
    query.prepare("DELETE FROM exam_management WHERE id = :id");
    query.bindValue(":id", examId);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Exam removed successfully!");
        loadExamRecords();
    } else {
        QMessageBox::critical(this, "Error", "Failed to remove exam: " + query.lastError().text());
    }
}

void ExamManagement::onSearchTextChanged(const QString &text)
{
    QSqlQuery query;
    query.prepare("SELECT id, class_name, subject, exam_date, start_time, end_time, invigilator, room FROM exam_management "
                  "WHERE class_name LIKE :search OR subject LIKE :search OR invigilator LIKE :search ORDER BY exam_date DESC");
    query.bindValue(":search", "%" + text + "%");

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to search exams: " + query.lastError().text());
        return;
    }

    model->setQuery(std::move(query));
    ui->examTable->setModel(model);
}
void ExamManagement::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        close();  // Closes the Attendance Management window
    } else {
        QWidget::keyPressEvent(event);  // Passes other key presses to the parent class
    }
}

