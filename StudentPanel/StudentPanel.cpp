#include "StudentPanel.h"
#include "ui_StudentPanel.h"
#include "StudentInfo.h"
#include "StudentAttendance.h"
#include "StudentExam.h"
#include "StudentSchedule.h"
#include "StudentResult.h"

StudentPanel::StudentPanel(QWidget *parent, int studentId, const QString &studentName, const QString &studentClass) :
    QDialog(parent), ui(new Ui::StudentPanel), studentId(studentId), studentName(studentName), studentClass(studentClass)
{
    ui->setupUi(this);
    setWindowTitle("Student Panel");
}

StudentPanel::~StudentPanel()
{
    delete ui;
}

void StudentPanel::on_personalInfoButton_clicked()
{
    StudentInfo *info = new StudentInfo(this, studentId);
    info->exec();
}

void StudentPanel::on_attendanceButton_clicked()
{
    StudentAttendance *att = new StudentAttendance(this, studentId);
    att->exec();
}

void StudentPanel::on_examButton_clicked()
{
    StudentExam *exam = new StudentExam(this, studentClass);
    exam->exec();
}

void StudentPanel::on_scheduleButton_clicked()
{
    StudentSchedule *sched = new StudentSchedule(this,studentClass);
    sched->exec();
}

void StudentPanel::on_resultButton_clicked()
{
    StudentResult *result = new StudentResult(this, studentId);
    result->exec();
}
