/********************************************************************************
** Form generated from reading UI file 'TeacherExamManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHEREXAMMANAGEMENT_H
#define UI_TEACHEREXAMMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_TeacherExamManagement
{
public:
    QLineEdit *searchBar;
    QTableView *examTable;
    QPushButton *closeButton;
    QLabel *label;

    void setupUi(QDialog *TeacherExamManagement)
    {
        if (TeacherExamManagement->objectName().isEmpty())
            TeacherExamManagement->setObjectName("TeacherExamManagement");
        TeacherExamManagement->resize(600, 513);
        TeacherExamManagement->setStyleSheet(QString::fromUtf8("QDialog#TeacherExamManagement {\n"
"     background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        searchBar = new QLineEdit(TeacherExamManagement);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(0, 80, 581, 31));
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit#searchBar {\n"
"  color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        examTable = new QTableView(TeacherExamManagement);
        examTable->setObjectName("examTable");
        examTable->setGeometry(QRect(10, 120, 581, 331));
        examTable->setStyleSheet(QString::fromUtf8("QTableView#examTable {\n"
"   border: 1.5px solid #b0b0b0;  /* Softer grey border */\n"
"    border-radius: 10px;\n"
"    background-color: #d4d4d4;    /* Lighter table background */\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"    font-size: 11pt;\n"
"    color: #1f1f1f;\n"
"    gridline-color: #bcbcbc;      /* Mid grey grid lines */\n"
"    alternate-background-color: #e2e2e2;  /* Subtle row alternation */\n"
"    selection-background-color: #b0b0b0;  /* Visible selection */\n"
"    selection-color: #000000;\n"
"    font-weight: 500;\n"
"\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #4b4b4b;    /* Darker grey header */\n"
"    color: #ffffff;               /* Light font for contrast */\n"
"    font-weight: bold;\n"
"    font-size: 11pt;\n"
"    padding: 6px;\n"
"    border: none;\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"   background-color: #8a8a8a;    /* Match header color */\n"
"    border: none;\n"
"}\n"
"\n"
"QTableW"
                        "idget::item {\n"
"      padding: 8px 10px;\n"
"    font-size: 10pt;\n"
"    color: #1f1f1f;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #b0b0b0;\n"
"    color: #000000;\n"
"}\n"
""));
        closeButton = new QPushButton(TeacherExamManagement);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(20, 460, 561, 31));
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton#closeButton {\n"
"     border: 1.5px solid #B89FD0;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(95, 2, 95),\n"
"                            stop:1 rgb(216, 181, 221));\n"
"color:#e4c9f2;\n"
"font-weight:700;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#closeButton:hover {\n"
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        label = new QLabel(TeacherExamManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 10, 221, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel#label{\n"
"  background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"\n"
";}"));

        retranslateUi(TeacherExamManagement);

        QMetaObject::connectSlotsByName(TeacherExamManagement);
    } // setupUi

    void retranslateUi(QDialog *TeacherExamManagement)
    {
        TeacherExamManagement->setWindowTitle(QCoreApplication::translate("TeacherExamManagement", "Assigned Exams", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("TeacherExamManagement", "\360\237\224\215Search Exam...", nullptr));
        closeButton->setText(QCoreApplication::translate("TeacherExamManagement", "Close", nullptr));
        label->setText(QCoreApplication::translate("TeacherExamManagement", "EXAM MANAGMENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherExamManagement: public Ui_TeacherExamManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHEREXAMMANAGEMENT_H
