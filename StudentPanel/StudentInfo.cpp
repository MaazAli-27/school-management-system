#include "StudentInfo.h"
#include "ui_StudentInfo.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

StudentInfo::StudentInfo(QWidget *parent, int studentId) :
    QDialog(parent),
    ui(new Ui::StudentInfo),
    studentId(studentId)
{
    ui->setupUi(this);
    setWindowTitle("Student Information");
    connect(ui->btnClose, &QPushButton::clicked, this, &QDialog::close);
    // Initialize the fields as read-only QLineEdits
    ui->lineEditId->setText(QString::number(studentId));  // Set the student ID directly
    // Load student info from the database
    loadStudentInfo();
}

StudentInfo::~StudentInfo()
{
    delete ui;
}

void StudentInfo::loadStudentInfo()
{
    QSqlQuery query;
    query.prepare("SELECT name, class, password FROM students WHERE id = :id");
    query.bindValue(":id", studentId);

    if (query.exec() && query.next()) {
        // Populate the QLineEdits with the student information
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditClass->setText(query.value(1).toString());
        ui->lineEditPassword->setText(query.value(2).toString());
    } else {
        // Show an error if the query fails
        QMessageBox::warning(this, "Error", "Failed to load student info: " + query.lastError().text());
    }
}
