/********************************************************************************
** Form generated from reading UI file 'AdminPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANEL_H
#define UI_ADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminPanel
{
public:
    QPushButton *studentButton;
    QPushButton *teacherButton;
    QPushButton *attendanceButton;
    QPushButton *examButton;
    QPushButton *classScheduleButton;
    QLabel *label;

    void setupUi(QDialog *AdminPanel)
    {
        if (AdminPanel->objectName().isEmpty())
            AdminPanel->setObjectName("AdminPanel");
        AdminPanel->resize(675, 380);
        AdminPanel->setMaximumSize(QSize(2000, 1000));
        AdminPanel->setStyleSheet(QString::fromUtf8("QDialog#AdminPanel {\n"
"         background-color:#1B0633;\n"
"border:8px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        AdminPanel->setModal(false);
        studentButton = new QPushButton(AdminPanel);
        studentButton->setObjectName("studentButton");
        studentButton->setGeometry(QRect(40, 30, 250, 40));
        studentButton->setMaximumSize(QSize(250, 40));
        studentButton->setStyleSheet(QString::fromUtf8("QPushButton#studentButton {\n"
"border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;\n"
"\n"
"}\n"
"\n"
"QPushButton#studentButton:hover {\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        teacherButton = new QPushButton(AdminPanel);
        teacherButton->setObjectName("teacherButton");
        teacherButton->setGeometry(QRect(40, 100, 250, 40));
        teacherButton->setMaximumSize(QSize(250, 40));
        teacherButton->setStyleSheet(QString::fromUtf8("QPushButton#teacherButton {\n"
"   border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;\n"
"}\n"
"\n"
"QPushButton#teacherButton:hover {\n"
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        attendanceButton = new QPushButton(AdminPanel);
        attendanceButton->setObjectName("attendanceButton");
        attendanceButton->setGeometry(QRect(40, 170, 250, 40));
        attendanceButton->setMaximumSize(QSize(250, 40));
        attendanceButton->setStyleSheet(QString::fromUtf8("QPushButton#attendanceButton {\n"
"   border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;\n"
"}\n"
"\n"
"QPushButton#attendanceButton:hover {\n"
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        examButton = new QPushButton(AdminPanel);
        examButton->setObjectName("examButton");
        examButton->setGeometry(QRect(40, 240, 250, 40));
        examButton->setMaximumSize(QSize(250, 40));
        examButton->setStyleSheet(QString::fromUtf8("QPushButton#examButton {\n"
"   border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;\n"
"}\n"
"\n"
"QPushButton#examButton:hover {\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        classScheduleButton = new QPushButton(AdminPanel);
        classScheduleButton->setObjectName("classScheduleButton");
        classScheduleButton->setGeometry(QRect(40, 310, 250, 41));
        classScheduleButton->setMaximumSize(QSize(250, 42));
        classScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#classScheduleButton {\n"
"   border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;\n"
"}\n"
"\n"
"QPushButton#classScheduleButton:hover {\n"
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        label = new QLabel(AdminPanel);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 0, 511, 381));
        label->setStyleSheet(QString::fromUtf8("QLabel#label{\n"
"\n"
"}"));
        label->setPixmap(QPixmap(QString::fromUtf8("D:/Users/Dell/Downloads/admin page.jpeg")));

        retranslateUi(AdminPanel);

        QMetaObject::connectSlotsByName(AdminPanel);
    } // setupUi

    void retranslateUi(QDialog *AdminPanel)
    {
        AdminPanel->setWindowTitle(QCoreApplication::translate("AdminPanel", "Admin Panel", nullptr));
        studentButton->setText(QCoreApplication::translate("AdminPanel", "Manage Students", nullptr));
        teacherButton->setText(QCoreApplication::translate("AdminPanel", "Manage Teachers", nullptr));
        attendanceButton->setText(QCoreApplication::translate("AdminPanel", "Manage Attendance", nullptr));
        examButton->setText(QCoreApplication::translate("AdminPanel", "Manage Exams", nullptr));
        classScheduleButton->setText(QCoreApplication::translate("AdminPanel", "Manage Class Schedules", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminPanel: public Ui_AdminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
