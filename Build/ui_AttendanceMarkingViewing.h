/********************************************************************************
** Form generated from reading UI file 'AttendanceMarkingViewing.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEMARKINGVIEWING_H
#define UI_ATTENDANCEMARKINGVIEWING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_AttendanceMarkingViewing
{
public:
    QLabel *lblTitle;
    QTableWidget *tableWidget;

    void setupUi(QDialog *AttendanceMarkingViewing)
    {
        if (AttendanceMarkingViewing->objectName().isEmpty())
            AttendanceMarkingViewing->setObjectName("AttendanceMarkingViewing");
        AttendanceMarkingViewing->resize(373, 422);
        AttendanceMarkingViewing->setStyleSheet(QString::fromUtf8("QDialog#AttendanceMarkingViewing {\n"
"        background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;;\n"
"}"));
        lblTitle = new QLabel(AttendanceMarkingViewing);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(60, 10, 231, 41));
        QFont font;
        font.setBold(true);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("QLabel#lblTitle {\n"
"        background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"\n"
"}"));
        lblTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableWidget = new QTableWidget(AttendanceMarkingViewing);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 70, 351, 341));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget#tableWidget {\n"
"    border: 1.5px solid #b0b0b0;  /* Softer grey border */\n"
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
"QT"
                        "ableWidget::item {\n"
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

        retranslateUi(AttendanceMarkingViewing);

        QMetaObject::connectSlotsByName(AttendanceMarkingViewing);
    } // setupUi

    void retranslateUi(QDialog *AttendanceMarkingViewing)
    {
        AttendanceMarkingViewing->setWindowTitle(QCoreApplication::translate("AttendanceMarkingViewing", "My Attendance Record", nullptr));
        lblTitle->setText(QCoreApplication::translate("AttendanceMarkingViewing", "ATTENDENCE RECORD", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AttendanceMarkingViewing", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AttendanceMarkingViewing", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttendanceMarkingViewing: public Ui_AttendanceMarkingViewing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEMARKINGVIEWING_H
