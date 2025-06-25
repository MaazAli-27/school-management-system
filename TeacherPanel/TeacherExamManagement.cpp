#include "TeacherExamManagement.h"
#include "ui_TeacherExamManagement.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

TeacherExamManagement::TeacherExamManagement(const QString& teacherName, QWidget *parent)
    : QDialog(parent), ui(new Ui::TeacherExamManagement), teacherName(teacherName)
{
    ui->setupUi(this);

    model = new QSqlQueryModel(this);
    loadAssignedExams();

    // Connect search bar text change signal to filter exams
    connect(ui->searchBar, &QLineEdit::textChanged, this, &TeacherExamManagement::onSearchTextChanged);

    // Close button functionality
    connect(ui->closeButton, &QPushButton::clicked, this, &TeacherExamManagement::close);
}

TeacherExamManagement::~TeacherExamManagement()
{
    delete ui;
}

void TeacherExamManagement::loadAssignedExams()
{
    QSqlQuery query;
    query.prepare("SELECT id, class_name, subject, exam_date, start_time, end_time, room FROM exam_management WHERE invigilator = ?");
    query.addBindValue(teacherName);

    if (!query.exec()) {
        qDebug() << "Error loading assigned exams:" << query.lastError().text();
        return;
    }

    model->setQuery(std::move(query));
    model->setHeaderData(0, Qt::Horizontal, "Exam ID");
    model->setHeaderData(1, Qt::Horizontal, "Class");
    model->setHeaderData(2, Qt::Horizontal, "Subject");
    model->setHeaderData(3, Qt::Horizontal, "Date");
    model->setHeaderData(4, Qt::Horizontal, "Start Time");
    model->setHeaderData(5, Qt::Horizontal, "End Time");
    model->setHeaderData(6, Qt::Horizontal, "Room");

    ui->examTable->setModel(model);
    ui->examTable->resizeColumnsToContents();
}

void TeacherExamManagement::onSearchTextChanged(const QString &text)
{
    QString filter = QString("invigilator = '%1' AND (class_name LIKE '%%2%' OR subject LIKE '%%2%')").arg(teacherName, text);
    model->setQuery("SELECT id, class_name, subject, exam_date, start_time, end_time, room FROM exam_management WHERE " + filter);
}
