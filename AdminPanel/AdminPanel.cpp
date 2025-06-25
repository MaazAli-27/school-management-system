#include "AdminPanel.h"
#include "ui_AdminPanel.h"
#include "StudentManagement.h"
#include "TeacherManagement.h"
#include "ClassScheduleManagement.h"
#include "AttendanceManagement.h"
#include "ExamManagement.h"

AdminPanel::AdminPanel(QWidget *parent) : QDialog(parent), ui(new Ui::AdminPanel) {
    ui->setupUi(this);

    connect(ui->studentButton, &QPushButton::clicked, this, &AdminPanel::openStudentManagement);
    connect(ui->teacherButton, &QPushButton::clicked, this, &AdminPanel::openTeacherManagement);
    connect(ui->classScheduleButton, &QPushButton::clicked, this, &AdminPanel::openClassScheduleManagement);
    connect(ui->attendanceButton, &QPushButton::clicked, this, &AdminPanel::openAttendanceManagement);
    connect(ui->examButton, &QPushButton::clicked, this, &AdminPanel::openExamManagement);
}

AdminPanel::~AdminPanel() {
    delete ui;
}

void AdminPanel::openStudentManagement() {
    StudentManagement studentWindow;
    studentWindow.exec();
}

void AdminPanel::openTeacherManagement() {
    TeacherManagement teacherWindow;
    teacherWindow.exec();
}

void AdminPanel::openClassScheduleManagement() {
    ClassScheduleManagement classScheduleManagementWindow;
    classScheduleManagementWindow.exec();
}

void AdminPanel::openAttendanceManagement() {
    AttendanceManagement *attendanceWindow = new AttendanceManagement(this);
    attendanceWindow->show();
    attendanceWindow->raise();
    attendanceWindow->activateWindow();

}

void AdminPanel::openExamManagement() {
    ExamManagement *examWindow = new ExamManagement();
    examWindow->show();
}
