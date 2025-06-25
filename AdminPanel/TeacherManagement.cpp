#include "TeacherManagement.h"
#include "ui_TeacherManagement.h"
#include <QInputDialog>
#include <QRandomGenerator>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

TeacherManagement::TeacherManagement(QWidget *parent)
    : QDialog(parent), ui(new Ui::TeacherManagement) {
    ui->setupUi(this);

    connect(ui->addTeacherButton, &QPushButton::clicked, this, &TeacherManagement::addTeacher);
    connect(ui->editTeacherButton, &QPushButton::clicked, this, &TeacherManagement::editTeacher);
    connect(ui->removeTeacherButton, &QPushButton::clicked, this, &TeacherManagement::removeTeacher);
    connect(ui->viewTeacherButton, &QPushButton::clicked, this, &TeacherManagement::viewTeacher);
    updateTable();
    connect(ui->nameLineEdit, &QLineEdit::textChanged, this, &TeacherManagement::filterTeachers);
    connect(ui->subjectLineEdit, &QLineEdit::textChanged, this, &TeacherManagement::filterTeachers);
}

TeacherManagement::~TeacherManagement() {
    delete ui;
}

// Generate a random 4-character password
QString TeacherManagement::generateRandomPassword(int length) {
    const QString chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    QString password;
    for (int i = 0; i < length; ++i) {
        password.append(chars[QRandomGenerator::global()->bounded(chars.length())]);
    }
    return password;
}

// Function to Update the Table in UI
void TeacherManagement::updateTable() {
    QSqlQuery query("SELECT id, name, subject FROM teachers");

    ui->teacherTable->setRowCount(0);
    ui->teacherTable->setColumnCount(3); // Ensure table has 3 columns
    ui->teacherTable->setHorizontalHeaderLabels({"ID", "Name", "Subject"}); // Set column headers
    int row = 0;

    while (query.next()) {
        ui->teacherTable->insertRow(row);
        ui->teacherTable->setItem(row, 0, new QTableWidgetItem(query.value("id").toString()));
        ui->teacherTable->setItem(row, 1, new QTableWidgetItem(query.value("name").toString()));
        ui->teacherTable->setItem(row, 2, new QTableWidgetItem(query.value("subject").toString()));
        row++;
    }
}

void TeacherManagement::filterTeachers() {
    QString nameFilter = ui->nameLineEdit->text().trimmed();
    QString subjectFilter = ui->subjectLineEdit->text().trimmed();

    QString queryStr = "SELECT id, name, subject FROM teachers WHERE 1=1";
    if (!nameFilter.isEmpty()) {
        queryStr += " AND name LIKE '%" + nameFilter + "%'";
    }
    if (!subjectFilter.isEmpty()) {
        queryStr += " AND subject LIKE '%" + subjectFilter + "%'";
    }

    QSqlQuery query(queryStr);
    ui->teacherTable->setRowCount(0);
    int row = 0;

    while (query.next()) {
        ui->teacherTable->insertRow(row);
        ui->teacherTable->setItem(row, 0, new QTableWidgetItem(query.value("id").toString()));
        ui->teacherTable->setItem(row, 1, new QTableWidgetItem(query.value("name").toString()));
        ui->teacherTable->setItem(row, 2, new QTableWidgetItem(query.value("subject").toString()));
        row++;
    }
}


// Add Teacher Function
void TeacherManagement::addTeacher() {
    QString name = QInputDialog::getText(this, "Add Teacher", "Enter teacher name:");
    if (name.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Teacher name cannot be empty.");
        return;
    }

    QString subjectName = QInputDialog::getText(this, "Add Teacher", "Enter teacher subject:");
    if (subjectName.isEmpty()) return;

    QString password = generateRandomPassword(4);

    // Find the smallest available ID
    int newID = 1;
    QSqlQuery checkQuery("SELECT id FROM teachers ORDER BY id ASC");
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

    // Insert Teacher with the manually chosen ID
    QSqlQuery query;
    query.prepare("INSERT INTO teachers (id, name, password, subject) VALUES (:id, :name, :password, :subject)");
    query.bindValue(":id", newID);
    query.bindValue(":name", name);
    query.bindValue(":password", password);
    query.bindValue(":subject", subjectName);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Teacher added successfully!\nID: " + QString::number(newID) + "\nUsername: " + name + "\nPassword: " + password);
        updateTable();
    } else {
        QMessageBox::critical(this, "Error", "Failed to add teacher: " + query.lastError().text());
    }
}


// Edit Teacher Function
void TeacherManagement::editTeacher() {
    int id = QInputDialog::getInt(this, "Edit Teacher", "Enter teacher ID to edit:");
    if (id <= 0) {
        QMessageBox::warning(this, "Input Error", "Invalid teacher ID!");
        return;
    }
    QSqlQuery query;
    query.prepare("SELECT name, subject FROM teachers WHERE id = :id");
    query.bindValue(":id", id);
    if (!query.exec() || !query.next()) {
        QMessageBox::warning(this, "Error", "teacher ID not found.");
        return;
    }

    QString name = QInputDialog::getText(this, "Edit Teacher", "Enter new name:", QLineEdit::Normal, query.value(0).toString());
    QString subjectName = QInputDialog::getText(this, "Edit Teacher", "Enter new subject:", QLineEdit::Normal, query.value(1).toString());

    if (name.isEmpty() || subjectName.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Name and subject cannot be empty.");
        return;
    }

    query.prepare("UPDATE teachers SET name = :name, subject = :subject WHERE id = :id");
    query.bindValue(":name", name);
    query.bindValue(":subject", subjectName);
    query.bindValue(":id", id);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Teacher details updated.");
        updateTable();
    } else {
        QMessageBox::critical(this, "Error", "Failed to update teacher: " + query.lastError().text());
    }
}

// Remove Teacher Function
void TeacherManagement::removeTeacher() {
    int id = QInputDialog::getInt(this, "Remove Teacher", "Enter teacher ID to remove:");
    if (id <= 0) {
        QMessageBox::warning(this, "Input Error", "Invalid teacher ID!");
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM teachers WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Teacher removed.");
        updateTable();
        resetAutoIncrement();
    } else {
        QMessageBox::critical(this, "Error", "Failed to remove teacher: " + query.lastError().text());
    }
}

// Reset Auto-Increment if No Teachers Exist
void TeacherManagement::resetAutoIncrement() {
    QSqlQuery countQuery("SELECT COUNT(*) FROM teachers");
    countQuery.next();
    int count = countQuery.value(0).toInt();

    if (count == 0) {
        QSqlQuery resetQuery;
        resetQuery.exec("ALTER TABLE teachers AUTO_INCREMENT = 1");
    }
}

// View Teachers Function
void TeacherManagement::viewTeacher() {
    ui->viewTeacherButton->setEnabled(true);  // Ensure button is enabled
    updateTable();  // Update the table first

    QSqlQuery query("SELECT id, name, password, subject FROM teachers");

    QString teacherList = "ID\tName\t\tPassword\tSubject\n";
    while (query.next()) {
        teacherList += query.value(0).toString() + "\t" +
                       query.value(1).toString() + "\t\t" +
                       query.value(2).toString() + "\t\t" +
                       query.value(3).toString() + "\n";
    }

    if (teacherList == "ID\tName\t\tPassword\tSubject\n") {
        QMessageBox::information(this, "Teacher List", "No teachers found.");
    } else {
        QMessageBox::information(this, "Teacher List", teacherList);
    }
}
