/********************************************************************************
** Form generated from reading UI file 'TeacherPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERPANEL_H
#define UI_TEACHERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TeacherPanel
{
public:
    QPushButton *btnClassSchedule;
    QPushButton *btnExamResult;
    QPushButton *btnAttendanceViewing;
    QPushButton *btnExamManagement;
    QLabel *label;

    void setupUi(QDialog *TeacherPanel)
    {
        if (TeacherPanel->objectName().isEmpty())
            TeacherPanel->setObjectName("TeacherPanel");
        TeacherPanel->resize(754, 420);
        TeacherPanel->setStyleSheet(QString::fromUtf8("QDialog#TeacherPanel {\n"
"          background-color:#1B0633;\n"
"border:9.5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        btnClassSchedule = new QPushButton(TeacherPanel);
        btnClassSchedule->setObjectName("btnClassSchedule");
        btnClassSchedule->setGeometry(QRect(50, 60, 300, 41));
        btnClassSchedule->setStyleSheet(QString::fromUtf8("QPushButton#btnClassSchedule {\n"
"        border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#btnClassSchedule:hover {\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        btnExamResult = new QPushButton(TeacherPanel);
        btnExamResult->setObjectName("btnExamResult");
        btnExamResult->setGeometry(QRect(50, 140, 300, 41));
        btnExamResult->setStyleSheet(QString::fromUtf8("QPushButton#btnExamResult {\n"
"        border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#btnExamResult:hover {\n"
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        btnAttendanceViewing = new QPushButton(TeacherPanel);
        btnAttendanceViewing->setObjectName("btnAttendanceViewing");
        btnAttendanceViewing->setGeometry(QRect(50, 220, 300, 41));
        btnAttendanceViewing->setStyleSheet(QString::fromUtf8("QPushButton#btnAttendanceViewing {\n"
"        border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#btnAttendanceViewing:hover {\n"
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        btnExamManagement = new QPushButton(TeacherPanel);
        btnExamManagement->setObjectName("btnExamManagement");
        btnExamManagement->setGeometry(QRect(50, 300, 300, 41));
        btnExamManagement->setStyleSheet(QString::fromUtf8("QPushButton#btnExamManagement {\n"
"       border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#btnExamManagement:hover {\n"
"  background-color: #69166f;\n"
"}\n"
"\n"
""));
        label = new QLabel(TeacherPanel);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 10, 371, 401));
        label->setPixmap(QPixmap(QString::fromUtf8("D:/Users/Dell/Downloads/teacher page.jpeg")));

        retranslateUi(TeacherPanel);

        QMetaObject::connectSlotsByName(TeacherPanel);
    } // setupUi

    void retranslateUi(QDialog *TeacherPanel)
    {
        TeacherPanel->setWindowTitle(QCoreApplication::translate("TeacherPanel", "Teacher Panel", nullptr));
        btnClassSchedule->setText(QCoreApplication::translate("TeacherPanel", "View Class Schedule", nullptr));
        btnExamResult->setText(QCoreApplication::translate("TeacherPanel", "Manage Exam Results", nullptr));
        btnAttendanceViewing->setText(QCoreApplication::translate("TeacherPanel", "View Attendance", nullptr));
        btnExamManagement->setText(QCoreApplication::translate("TeacherPanel", "View Assigned Exams", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TeacherPanel: public Ui_TeacherPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERPANEL_H
