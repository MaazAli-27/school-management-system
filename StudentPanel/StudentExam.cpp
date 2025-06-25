#include "StudentExam.h"
#include "ui_StudentExam.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QHeaderView>

StudentExam::StudentExam(QWidget *parent, const QString &studentClass) :
    QDialog(parent),
    ui(new Ui::StudentExam),
    studentClass(studentClass)
{
    ui->setupUi(this);
    setWindowTitle("Assigned Exams");
    loadAssignedExams();
}

StudentExam::~StudentExam()
{
    delete ui;
}

void StudentExam::loadAssignedExams()
{
    QSqlQuery query;
    query.prepare("SELECT class_name, subject, invigilator, exam_date, start_time, end_time, room FROM exam_management WHERE class_name = :class_name ORDER BY exam_date, start_time");
    query.bindValue(":class_name", studentClass);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to fetch assigned exams: " + query.lastError().text());
        return;
    }

    int row = 0;
    ui->tableWidget->setRowCount(query.size());  // Set number of rows based on query result
    while (query.next()) {
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));  // Class Name
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));  // Subject
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));  // Invigilator
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));  // Exam Date
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));  // Start Time
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(query.value(5).toString()));  // End Time
        ui->tableWidget->setItem(row, 6, new QTableWidgetItem(query.value(6).toString()));  // Room
        row++;
    }
}
