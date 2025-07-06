/********************************************************************************
** Form generated from reading UI file 'StudentAttendance.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTATTENDANCE_H
#define UI_STUDENTATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentAttendance
{
public:
    QLabel *titleLabel;
    QTableWidget *tableWidget_2;

    void setupUi(QDialog *StudentAttendance)
    {
        if (StudentAttendance->objectName().isEmpty())
            StudentAttendance->setObjectName("StudentAttendance");
        StudentAttendance->resize(291, 432);
        StudentAttendance->setStyleSheet(QString::fromUtf8("QDialog#StudentAttendance {\n"
"        background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        titleLabel = new QLabel(StudentAttendance);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(30, 10, 231, 41));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel {\n"
"      background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableWidget_2 = new QTableWidget(StudentAttendance);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(10, 80, 271, 341));
        tableWidget_2->setStyleSheet(QString::fromUtf8("QTableWidget#tableWidget_2 {\n"
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
"QTable"
                        "Widget::item {\n"
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

        retranslateUi(StudentAttendance);

        QMetaObject::connectSlotsByName(StudentAttendance);
    } // setupUi

    void retranslateUi(QDialog *StudentAttendance)
    {
        StudentAttendance->setWindowTitle(QCoreApplication::translate("StudentAttendance", "My Attendance", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentAttendance", "ATTENDENCE RECORD", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("StudentAttendance", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("StudentAttendance", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentAttendance: public Ui_StudentAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTATTENDANCE_H
