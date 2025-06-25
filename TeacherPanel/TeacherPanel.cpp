#include "TeacherPanel.h"
#include "ui_TeacherPanel.h"
#include "ClassScheduleViewing.h"
#include "ExamResultManagement.h"
#include "AttendanceMarkingViewing.h"
#include "TeacherExamManagement.h"

TeacherPanel::TeacherPanel(QWidget *parent, const QString &teacherName,int teacherId) :
    QDialog(parent),
    ui(new Ui::TeacherPanel),
    teacherName(teacherName),
    teacherId(teacherId)
{
    ui->setupUi(this);

    // Connect buttons to open respective windows
    connect(ui->btnClassSchedule, &QPushButton::clicked, this, &TeacherPanel::openClassSchedule);
    connect(ui->btnExamResult, &QPushButton::clicked, this, &TeacherPanel::openExamResultManagement);
    connect(ui->btnAttendanceViewing, &QPushButton::clicked, this, &TeacherPanel::openAttendanceViewing);
    connect(ui->btnExamManagement, &QPushButton::clicked, this, &TeacherPanel::openExamManagement);
}

TeacherPanel::~TeacherPanel()
{
    delete ui;
}

void TeacherPanel::openClassSchedule()
{
    ClassScheduleViewing scheduleWindow(this, teacherName);
    scheduleWindow.exec();
}

void TeacherPanel::openExamResultManagement()
{
    ExamResultManagement resultWindow(this,teacherName);
    resultWindow.exec();
}

void TeacherPanel::openAttendanceViewing()
{
    AttendanceMarkingViewing attendanceWindow(this,teacherId);
    attendanceWindow.exec();
}

void TeacherPanel::openExamManagement()
{
    TeacherExamManagement examWindow(teacherName, this); // This will only allow viewing assigned exams
    examWindow.exec();
}
