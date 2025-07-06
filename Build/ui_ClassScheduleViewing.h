/********************************************************************************
** Form generated from reading UI file 'ClassScheduleViewing.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSSCHEDULEVIEWING_H
#define UI_CLASSSCHEDULEVIEWING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ClassScheduleViewing
{
public:
    QTableView *tableView;
    QPushButton *closeButton;
    QLabel *label;

    void setupUi(QDialog *ClassScheduleViewing)
    {
        if (ClassScheduleViewing->objectName().isEmpty())
            ClassScheduleViewing->setObjectName("ClassScheduleViewing");
        ClassScheduleViewing->resize(623, 435);
        ClassScheduleViewing->setStyleSheet(QString::fromUtf8("QDialog#ClassScheduleViewing {\n"
"       background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        tableView = new QTableView(ClassScheduleViewing);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 60, 601, 321));
        tableView->setStyleSheet(QString::fromUtf8("QTableView#tableView {\n"
"border: 1.5px solid #b0b0b0;  /* Softer grey border */\n"
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
"QTableWidg"
                        "et::item {\n"
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
        closeButton = new QPushButton(ClassScheduleViewing);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(20, 390, 581, 31));
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
" \n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        label = new QLabel(ClassScheduleViewing);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 10, 191, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel#label{\n"
"     background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"}\n"
""));

        retranslateUi(ClassScheduleViewing);

        QMetaObject::connectSlotsByName(ClassScheduleViewing);
    } // setupUi

    void retranslateUi(QDialog *ClassScheduleViewing)
    {
        ClassScheduleViewing->setWindowTitle(QCoreApplication::translate("ClassScheduleViewing", "Class Schedule", nullptr));
        closeButton->setText(QCoreApplication::translate("ClassScheduleViewing", "Close", nullptr));
        label->setText(QCoreApplication::translate("ClassScheduleViewing", "CLASS SCHEDULE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassScheduleViewing: public Ui_ClassScheduleViewing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSSCHEDULEVIEWING_H
