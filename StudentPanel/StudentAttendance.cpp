#include "StudentAttendance.h"
#include "ui_StudentAttendance.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

StudentAttendance::StudentAttendance(QWidget *parent, int studentId) :
    QDialog(parent),
    ui(new Ui::StudentAttendance),
    studentId(studentId)
{
    ui->setupUi(this);
    setWindowTitle("My Attendance");
    loadAttendanceRecords();
}

StudentAttendance::~StudentAttendance()
{
    delete ui;
}

void StudentAttendance::loadAttendanceRecords()
{
    QSqlQuery query;
    query.prepare("SELECT date, status FROM student_attendance WHERE student_id = :id ORDER BY date DESC");
    query.bindValue(":id", studentId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to fetch attendance records: " + query.lastError().text());
        return;
    }

    int row = 0;
    ui->tableWidget_2->setRowCount(query.size());  // Set the number of rows dynamically
    while (query.next()) {
        ui->tableWidget_2->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));  // Date
        ui->tableWidget_2->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));  // Status
        row++;
    }
}
