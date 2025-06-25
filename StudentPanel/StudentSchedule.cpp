#include "StudentSchedule.h"
#include "ui_StudentSchedule.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

StudentSchedule::StudentSchedule(QWidget *parent, const QString &studentClass) :
    QDialog(parent),
    ui(new Ui::StudentSchedule),
    studentClass(studentClass)
{
    ui->setupUi(this);
    setWindowTitle("Class Schedule");
    loadSchedule();
}

StudentSchedule::~StudentSchedule()
{
    delete ui;
}

void StudentSchedule::loadSchedule()
{
    QSqlQuery query;
    query.prepare("SELECT teacher_name, subject, day, time_start, time_end, room FROM class_schedule WHERE class_name = :class_name ORDER BY day, time_start");
    query.bindValue(":class_name", studentClass);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to load schedule: " + query.lastError().text());
        return;
    }

    int row = 0;
    ui->tableWidget->setRowCount(query.size());  // Set number of rows based on query result
    while (query.next()) {
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));  // Teacher Name
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));  // Subject
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));  // Day
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));  // Start Time
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));  // End Time
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(query.value(5).toString()));  // Room
        row++;
    }
}
