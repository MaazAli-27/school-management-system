#include "ClassScheduleManagement.h"
#include "ui_ClassScheduleManagement.h"
#include <QInputDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

ClassScheduleManagement::ClassScheduleManagement(QWidget *parent)
    : QDialog(parent), ui(new Ui::ClassScheduleManagement) {
    ui->setupUi(this);

    connect(ui->addScheduleButton, &QPushButton::clicked, this, &ClassScheduleManagement::addClassSchedule);
    connect(ui->editScheduleButton, &QPushButton::clicked, this, &ClassScheduleManagement::editClassSchedule);
    connect(ui->removeScheduleButton, &QPushButton::clicked, this, &ClassScheduleManagement::removeClassSchedule);
    connect(ui->viewScheduleButton, &QPushButton::clicked, this, &ClassScheduleManagement::viewClassSchedules);
    connect(ui->searchBar, &QLineEdit::textChanged, this, &ClassScheduleManagement::searchClassSchedule);
    updateTable();
}

ClassScheduleManagement::~ClassScheduleManagement() {
    delete ui;
}

// Function to update the table with current data
void ClassScheduleManagement::updateTable() {
    QSqlQuery query("SELECT id, class_name, teacher_name,subject, day, time_start, time_end, room FROM class_schedule");

    ui->scheduleTable->setRowCount(0);
    ui->scheduleTable->setColumnCount(8);
    ui->scheduleTable->setHorizontalHeaderLabels({"ID", "Class", "Teacher Name","Subject", "Day", "Start Time", "End Time", "Room"});

    int row = 0;
    while (query.next()) {
        ui->scheduleTable->insertRow(row);
        for (int col = 0; col < 8; ++col) {
            ui->scheduleTable->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
        }
        row++;
    }
}

// View all class schedules
void ClassScheduleManagement::viewClassSchedules() {
    updateTable();  // Refresh the table
}

// Add Class Schedule
void ClassScheduleManagement::addClassSchedule() {
    QString className = QInputDialog::getText(this, "Add Schedule", "Enter Class Name:");
    if (className.isEmpty()) return;

    QString teacherName = QInputDialog::getText(this, "Add Schedule", "Enter Teacher Name:");
    if (teacherName.isEmpty()) return;

    // Check if the teacher exists in the teachers table
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM teachers WHERE name = :teacher_name");
    checkQuery.bindValue(":teacher_name", teacherName);
    if (!checkQuery.exec() || !checkQuery.next() || checkQuery.value(0).toInt() == 0) {
        QMessageBox::warning(this, "Error", "Teacher does not exist in the system.");
        return;
    }
    QString subject = QInputDialog::getText(this, "Add Schedule", "Enter Subject:");
    if (subject.isEmpty()) return;
    QString day = QInputDialog::getItem(this, "Add Schedule", "Select Day:",
                                        {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}, 0, false);
    if (day.isEmpty()) return;

    QString timeStart = QInputDialog::getText(this, "Add Schedule", "Enter Start Time (HH:MM:SS):");
    QString timeEnd = QInputDialog::getText(this, "Add Schedule", "Enter End Time (HH:MM:SS):");

    QString room = QInputDialog::getText(this, "Add Schedule", "Enter Room Number:");
    if (room.isEmpty()) return;
    // Get the smallest available ID
    QSqlQuery idQuery;
    idQuery.exec("SELECT MIN(t1.id + 1) AS next_id "
                 "FROM class_schedule t1 "
                 "LEFT JOIN class_schedule t2 ON t1.id + 1 = t2.id "
                 "WHERE t2.id IS NULL");

    int nextID = 1; // Default to 1 if no schedules exist

    if (idQuery.next() && !idQuery.value(0).isNull()) {
        nextID = idQuery.value(0).toInt();
    }

    // Check if we found a valid missing ID, otherwise get the highest ID + 1
    if (nextID == 1) {
        QSqlQuery maxIDQuery;
        maxIDQuery.exec("SELECT COALESCE(MAX(id), 0) + 1 FROM class_schedule");
        if (maxIDQuery.next()) {
            nextID = maxIDQuery.value(0).toInt();
        }
    }

    QSqlQuery query;
    query.prepare("INSERT INTO class_schedule (id,class_name, teacher_name,subject, day, time_start, time_end, room) "
                  "VALUES (:id,:class_name, :teacher_name,:subject, :day, :time_start, :time_end, :room)");
    query.bindValue(":id", nextID);
    query.bindValue(":class_name", className);
    query.bindValue(":teacher_name", teacherName);
    query.bindValue(":subject", subject);
    query.bindValue(":day", day);
    query.bindValue(":time_start", timeStart);
    query.bindValue(":time_end", timeEnd);
    query.bindValue(":room", room);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Class schedule added successfully!");
        updateTable();
    } else {
        QMessageBox::critical(this, "Error", "Failed to add schedule: " + query.lastError().text());
    }
}

// Edit Class Schedule
void ClassScheduleManagement::editClassSchedule() {
    int id = QInputDialog::getInt(this, "Edit Schedule", "Enter Schedule ID:");
    if (id <= 0) return;

    QSqlQuery query;
    query.prepare("SELECT class_name, teacher_name,subject, day, time_start, time_end, room FROM class_schedule WHERE id = :id");
    query.bindValue(":id", id);

    if (!query.exec() || !query.next()) {
        QMessageBox::warning(this, "Error", "Schedule ID not found.");
        return;
    }

    QString className = QInputDialog::getText(this, "Edit Schedule", "Enter new Class Name:", QLineEdit::Normal, query.value(0).toString());
    QString teacherName = QInputDialog::getText(this, "Edit Schedule", "Enter new Teacher Name:", QLineEdit::Normal, query.value(1).toString());
    QString subject = QInputDialog::getText(this, "Edit Schedule", "Enter new Subject:", QLineEdit::Normal, query.value(2).toString());
    QString day = QInputDialog::getItem(this, "Edit Schedule", "Select new Day:",
                                        {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}, 0, false);
    QString timeStart = QInputDialog::getText(this, "Edit Schedule", "Enter new Start Time:", QLineEdit::Normal, query.value(4).toString());
    QString timeEnd = QInputDialog::getText(this, "Edit Schedule", "Enter new End Time:", QLineEdit::Normal, query.value(5).toString());
    QString room = QInputDialog::getText(this, "Edit Schedule", "Enter new Room:", QLineEdit::Normal, query.value(6).toString());

    // Check if the new teacher exists
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM teachers WHERE name = :teacher_name");
    checkQuery.bindValue(":teacher_name", teacherName);
    if (!checkQuery.exec() || !checkQuery.next() || checkQuery.value(0).toInt() == 0) {
        QMessageBox::warning(this, "Error", "Teacher does not exist in the system.");
        return;
    }

    query.prepare("UPDATE class_schedule SET class_name = :class_name, teacher_name = :teacher_name,subject=:subject, day = :day, time_start = :time_start, time_end = :time_end, room = :room WHERE id = :id");
    query.bindValue(":class_name", className);
    query.bindValue(":teacher_name", teacherName);
    query.bindValue(":subject", subject);
    query.bindValue(":day", day);
    query.bindValue(":time_start", timeStart);
    query.bindValue(":time_end", timeEnd);
    query.bindValue(":room", room);
    query.bindValue(":id", id);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Schedule updated.");
        updateTable();
    } else {
        QMessageBox::critical(this, "Error", "Failed to update schedule: " + query.lastError().text());
    }
}

// Remove Class Schedule
void ClassScheduleManagement::removeClassSchedule() {
    int id = QInputDialog::getInt(this, "Remove Schedule", "Enter Schedule ID:");
    if (id <= 0) return;

    QSqlQuery query;
    query.prepare("DELETE FROM class_schedule WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        // Reset the auto-increment to fill the gap
        query.exec("SET @count = (SELECT MIN(id) FROM class_schedule WHERE id > 0);");
        query.exec("UPDATE class_schedule SET id = @count WHERE id > @count;");
        query.exec("ALTER TABLE class_schedule AUTO_INCREMENT = (SELECT MAX(id) + 1 FROM class_schedule);");
        QMessageBox::information(this, "Success", "Schedule removed.");
        updateTable();
    } else {
        QMessageBox::critical(this, "Error", "Failed to remove schedule: " + query.lastError().text());
    }
}

// Search Class Schedule
void ClassScheduleManagement::searchClassSchedule(const QString &text) {
    QSqlQuery query;
    query.prepare("SELECT id, class_name, teacher_name,subject, day, time_start, time_end, room FROM class_schedule WHERE class_name LIKE :text ");
    query.bindValue(":text", "%" + text + "%");


    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Search failed: " + query.lastError().text());
        return;
    }

    ui->scheduleTable->setRowCount(0);
    int row = 0;
    while (query.next()) {
        ui->scheduleTable->insertRow(row);
        for (int col = 0; col < 8; ++col) {
            ui->scheduleTable->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
        }
        row++;
    }
}
