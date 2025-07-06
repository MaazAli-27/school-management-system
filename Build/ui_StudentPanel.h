/********************************************************************************
** Form generated from reading UI file 'StudentPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPANEL_H
#define UI_STUDENTPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentPanel
{
public:
    QPushButton *personalInfoButton;
    QPushButton *attendanceButton;
    QPushButton *examButton;
    QPushButton *scheduleButton;
    QPushButton *resultButton;
    QLabel *studentPanelpic;

    void setupUi(QDialog *StudentPanel)
    {
        if (StudentPanel->objectName().isEmpty())
            StudentPanel->setObjectName("StudentPanel");
        StudentPanel->resize(775, 401);
        StudentPanel->setStyleSheet(QString::fromUtf8("QDialog#StudentPanel {\n"
"             background-color:#1B0633;\n"
"border:9.5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        personalInfoButton = new QPushButton(StudentPanel);
        personalInfoButton->setObjectName("personalInfoButton");
        personalInfoButton->setGeometry(QRect(40, 40, 331, 41));
        personalInfoButton->setStyleSheet(QString::fromUtf8("QPushButton#personalInfoButton {\n"
"    border: 1.5px solid #B89FD0;\n"
"border-radius: 10px;\n"
"font-size: 20px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(60, 0, 60),     /* darker start */\n"
"                            stop:1 rgb(140, 110, 150)); /* darker end */\n"
"color: #e4c9f2;\n"
"font-weight: 1000;\n"
"}\n"
"\n"
"QPushButton#personalInfoButton:hover {\n"
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        attendanceButton = new QPushButton(StudentPanel);
        attendanceButton->setObjectName("attendanceButton");
        attendanceButton->setGeometry(QRect(40, 110, 331, 41));
        attendanceButton->setStyleSheet(QString::fromUtf8("QPushButton#attendanceButton {\n"
"    border: 1.5px solid #B89FD0;\n"
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
"background-color: #69166f;\n"
"}\n"
"\n"
""));
        examButton = new QPushButton(StudentPanel);
        examButton->setObjectName("examButton");
        examButton->setGeometry(QRect(40, 180, 331, 41));
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
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        scheduleButton = new QPushButton(StudentPanel);
        scheduleButton->setObjectName("scheduleButton");
        scheduleButton->setGeometry(QRect(40, 250, 331, 41));
        scheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#scheduleButton {\n"
"  border: 1.5px solid #B89FD0;\n"
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
"QPushButton#scheduleButton:hover {\n"
" background-color: #69166f;\n"
"}\n"
"\n"
""));
        resultButton = new QPushButton(StudentPanel);
        resultButton->setObjectName("resultButton");
        resultButton->setGeometry(QRect(40, 320, 331, 41));
        resultButton->setStyleSheet(QString::fromUtf8("QPushButton#resultButton {\n"
"    border: 1.5px solid #B89FD0;\n"
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
"QPushButton#resultButton:hover {\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        studentPanelpic = new QLabel(StudentPanel);
        studentPanelpic->setObjectName("studentPanelpic");
        studentPanelpic->setGeometry(QRect(400, 10, 371, 381));
        studentPanelpic->setPixmap(QPixmap(QString::fromUtf8("D:/Users/Dell/Downloads/student page.jpeg")));

        retranslateUi(StudentPanel);

        QMetaObject::connectSlotsByName(StudentPanel);
    } // setupUi

    void retranslateUi(QDialog *StudentPanel)
    {
        StudentPanel->setWindowTitle(QCoreApplication::translate("StudentPanel", "Student Panel", nullptr));
        personalInfoButton->setText(QCoreApplication::translate("StudentPanel", "Personal Info", nullptr));
        attendanceButton->setText(QCoreApplication::translate("StudentPanel", "My Attendance", nullptr));
        examButton->setText(QCoreApplication::translate("StudentPanel", "Assigned Exams", nullptr));
        scheduleButton->setText(QCoreApplication::translate("StudentPanel", "Class Schedule", nullptr));
        resultButton->setText(QCoreApplication::translate("StudentPanel", "My Results", nullptr));
        studentPanelpic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StudentPanel: public Ui_StudentPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPANEL_H
