#include "ClassScheduleViewing.h"
#include "ui_ClassScheduleViewing.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

ClassScheduleViewing::ClassScheduleViewing(QWidget *parent, const QString &teacherName) :
    QDialog(parent),
    ui(new Ui::ClassScheduleViewing),
    teacherName(teacherName)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(this);
    connect(ui->closeButton, &QPushButton::clicked, this, &ClassScheduleViewing::close);
    loadClassSchedule();
}

ClassScheduleViewing::~ClassScheduleViewing()
{
    delete ui;
}

void ClassScheduleViewing::loadClassSchedule()
{
    QSqlQuery query;
    query.prepare("SELECT id, class_name, day, time_start, time_end, room FROM class_schedule WHERE teacher_name = :teacherName");
    query.bindValue(":teacherName", teacherName);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to load class schedule: " + query.lastError().text());
        return;
    }

    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Class");
    model->setHeaderData(2, Qt::Horizontal, "Day");
    model->setHeaderData(3, Qt::Horizontal, "Start Time");
    model->setHeaderData(4, Qt::Horizontal, "End Time");
    model->setHeaderData(5, Qt::Horizontal, "Room");

    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
