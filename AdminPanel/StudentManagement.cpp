#include "StudentManagement.h"
#include "ui_StudentManagement.h"
#include <QInputDialog>
#include <QRandomGenerator>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

StudentManagement::StudentManagement(QWidget *parent)
    : QDialog(parent), ui(new Ui::StudentManagement) {
    ui->setupUi(this);

    connect(ui->addStudentButton, &QPushButton::clicked, this, &StudentManagement::addStudent);
    connect(ui->editStudentButton, &QPushButton::clicked, this, &StudentManagement::editStudent);
    connect(ui->removeStudentButton, &QPushButton::clicked, this, &StudentManagement::removeStudent);
    connect(ui->viewStudentButton, &QPushButton::clicked, this, &StudentManagement::viewStudents);

    updateTable();
    connect(ui->nameLineEdit, &QLineEdit::textChanged, this, &StudentManagement::filterStudents);
    connect(ui->classLineEdit, &QLineEdit::textChanged, this, &StudentManagement::filterStudents);
}

StudentManagement::~StudentManagement() {
    delete ui;
}

// Generate a random 4-character password
QString StudentManagement::generateRandomPassword(int length) {
    const QString chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    QString password;
    for (int i = 0; i < length; ++i) {
        password.append(chars[QRandomGenerator::global()->bounded(chars.length())]);
    }
    return password;
}

// Function to Update the Table in UI
void StudentManagement::updateTable() {
    QSqlQuery query("SELECT id, name, class FROM students");

    ui->studentTable->setRowCount(0);
    ui->studentTable->setColumnCount(3); // Ensure table has 3 columns
    ui->studentTable->setHorizontalHeaderLabels({"ID", "Name", "Class"}); // Set column headers
    int row = 0;

    while (query.next()) {
        ui->studentTable->insertRow(row);
        ui->studentTable->setItem(row, 0, new QTableWidgetItem(query.value("id").toString()));
        ui->studentTable->setItem(row, 1, new QTableWidgetItem(query.value("name").toString()));
        ui->studentTable->setItem(row, 2, new QTableWidgetItem(query.value("class").toString()));
        row++;
    }
}

void StudentManagement::filterStudents() {
    QString nameFilter = ui->nameLineEdit->text().trimmed();
    QString classFilter = ui->classLineEdit->text().trimmed();

    QString queryStr = "SELECT id, name, class FROM students WHERE 1=1";
    if (!nameFilter.isEmpty()) {
        queryStr += " AND name LIKE '%" + nameFilter + "%'";
    }
    if (!classFilter.isEmpty()) {
        queryStr += " AND class LIKE '%" + classFilter + "%'";
    }

    QSqlQuery query(queryStr);
    ui->studentTable->setRowCount(0);
    int row = 0;

    while (query.next()) {
        ui->studentTable->insertRow(row);
        ui->studentTable->setItem(row, 0, new QTableWidgetItem(query.value("id").toString()));
        ui->studentTable->setItem(row, 1, new QTableWidgetItem(query.value("name").toString()));
        ui->studentTable->setItem(row, 2, new QTableWidgetItem(query.value("class").toString()));
        row++;
    }
}


// Add Student Function
void StudentManagement::addStudent() {
    QString name = QInputDialog::getText(this, "Add Student", "Enter student name:");
    if (name.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Student name cannot be empty.");
        return;
    }

    QString className = QInputDialog::getText(this, "Add Student", "Enter student class:");
    if (className.isEmpty()) return;

    QString password = generateRandomPassword(4);

    // Find the smallest available ID
    int newID = 1;
    QSqlQuery checkQuery("SELECT id FROM students ORDER BY id ASC");
    QList<int> existingIDs;
    while (checkQuery.next()) {
        existingIDs.append(checkQuery.value(0).toInt());
    }

    for (int i = 1; i <= existingIDs.size(); ++i) {
        if (!existingIDs.contains(i)) {  // Find first missing ID
            newID = i;
            break;
        }
        newID = i + 1;  // If no gaps, use next available ID
    }

    // Insert Student with the manually chosen ID
    QSqlQuery query;
    query.prepare("INSERT INTO students (id, name, password, class) VALUES (:id, :name, :password, :class)");
    query.bindValue(":id", newID);
    query.bindValue(":name", name);
    query.bindValue(":password", password);
    query.bindValue(":class", className);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Student added successfully!\nID: " + QString::number(newID) + "\nUsername: " + name + "\nPassword: " + password);
        updateTable();
    } else {
        QMessageBox::critical(this, "Error", "Failed to add student: " + query.lastError().text());
    }
}


// Edit Student Function
void StudentManagement::editStudent() {
    int id = QInputDialog::getInt(this, "Edit Student", "Enter student ID to edit:");
    if (id <= 0) {
        QMessageBox::warning(this, "Input Error", "Invalid student ID!");
        return;
    }
    QSqlQuery query;
    query.prepare("SELECT name, class FROM students WHERE id = :id");
    query.bindValue(":id", id);
    if (!query.exec() || !query.next()) {
        QMessageBox::warning(this, "Error", "Student ID not found.");
        return;
    }

    QString name = QInputDialog::getText(this, "Edit Student", "Enter new name:", QLineEdit::Normal, query.value(0).toString());
    QString className = QInputDialog::getText(this, "Edit Student", "Enter new class:", QLineEdit::Normal, query.value(1).toString());

    if (name.isEmpty() || className.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Name and class cannot be empty.");
        return;
    }

    query.prepare("UPDATE students SET name = :name, class = :class WHERE id = :id");
    query.bindValue(":name", name);
    query.bindValue(":class", className);
    query.bindValue(":id", id);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Student details updated.");
        updateTable();
    } else {
        QMessageBox::critical(this, "Error", "Failed to update student: " + query.lastError().text());
    }
}

// Remove Student Function
void StudentManagement::removeStudent() {
    int id = QInputDialog::getInt(this, "Remove Student", "Enter student ID to remove:");
    if (id <= 0) {
        QMessageBox::warning(this, "Input Error", "Invalid student ID!");
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM students WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Student removed.");
        updateTable();
        resetAutoIncrement();
    } else {
        QMessageBox::critical(this, "Error", "Failed to remove student: " + query.lastError().text());
    }
}

// Reset Auto-Increment if No Students Exist
void StudentManagement::resetAutoIncrement() {
    QSqlQuery countQuery("SELECT COUNT(*) FROM students");
    countQuery.next();
    int count = countQuery.value(0).toInt();

    if (count == 0) {
        QSqlQuery resetQuery;
        resetQuery.exec("ALTER TABLE students AUTO_INCREMENT = 1");
    }
}

// View Students Function
void StudentManagement::viewStudents() {
    ui->viewStudentButton->setEnabled(true);  // Ensure button is enabled
    updateTable();  // Update the table first

    QSqlQuery query("SELECT id, name, password, class FROM students");

    QString studentList = "ID\tName\t\tPassword\tClass\n";
    while (query.next()) {
        studentList += query.value(0).toString() + "\t" +
                       query.value(1).toString() + "\t\t" +
                       query.value(2).toString() + "\t\t" +
                       query.value(3).toString() + "\n";
    }

    if (studentList == "ID\tName\t\tPassword\tSubject\n") {
        QMessageBox::information(this, "Student List", "No students found.");
    } else {
        QMessageBox::information(this, "Student List", studentList);
    }
}
