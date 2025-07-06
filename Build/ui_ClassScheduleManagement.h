/********************************************************************************
** Form generated from reading UI file 'ClassScheduleManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSSCHEDULEMANAGEMENT_H
#define UI_CLASSSCHEDULEMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ClassScheduleManagement
{
public:
    QTableWidget *scheduleTable;
    QPushButton *editScheduleButton;
    QPushButton *addScheduleButton;
    QLineEdit *searchBar;
    QPushButton *viewScheduleButton;
    QPushButton *removeScheduleButton;
    QLabel *label;

    void setupUi(QDialog *ClassScheduleManagement)
    {
        if (ClassScheduleManagement->objectName().isEmpty())
            ClassScheduleManagement->setObjectName("ClassScheduleManagement");
        ClassScheduleManagement->resize(845, 570);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClassScheduleManagement->sizePolicy().hasHeightForWidth());
        ClassScheduleManagement->setSizePolicy(sizePolicy);
        ClassScheduleManagement->setStyleSheet(QString::fromUtf8("QDialog#ClassScheduleManagement {\n"
"        background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        scheduleTable = new QTableWidget(ClassScheduleManagement);
        if (scheduleTable->columnCount() < 8)
            scheduleTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        scheduleTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        scheduleTable->setObjectName("scheduleTable");
        scheduleTable->setGeometry(QRect(10, 180, 821, 381));
        scheduleTable->setStyleSheet(QString::fromUtf8("QTableView#scheduleTable {\n"
"      border: 1.5px solid #b0b0b0;  /* Softer grey border */\n"
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
"QTabl"
                        "eWidget::item {\n"
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
        scheduleTable->setFrameShape(QFrame::Shape::StyledPanel);
        scheduleTable->setColumnCount(8);
        editScheduleButton = new QPushButton(ClassScheduleManagement);
        editScheduleButton->setObjectName("editScheduleButton");
        editScheduleButton->setGeometry(QRect(240, 80, 161, 31));
        editScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#editScheduleButton {\n"
"    border: 1.5px solid #B89FD0;\n"
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
"QPushButton#editScheduleButton:hover {\n"
"     background-color: #69166f;\n"
"}\n"
"\n"
""));
        addScheduleButton = new QPushButton(ClassScheduleManagement);
        addScheduleButton->setObjectName("addScheduleButton");
        addScheduleButton->setGeometry(QRect(60, 80, 161, 31));
        addScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#addScheduleButton {\n"
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
"QPushButton#addScheduleButton:hover {\n"
"     background-color: #69166f;\n"
"}\n"
"\n"
""));
        searchBar = new QLineEdit(ClassScheduleManagement);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(10, 130, 801, 31));
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit#searchBar {\n"
"     color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        viewScheduleButton = new QPushButton(ClassScheduleManagement);
        viewScheduleButton->setObjectName("viewScheduleButton");
        viewScheduleButton->setGeometry(QRect(420, 80, 161, 31));
        viewScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#viewScheduleButton {\n"
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
"QPushButton#viewScheduleButton:hover {\n"
"  background-color: #69166f;\n"
"}\n"
"\n"
""));
        removeScheduleButton = new QPushButton(ClassScheduleManagement);
        removeScheduleButton->setObjectName("removeScheduleButton");
        removeScheduleButton->setGeometry(QRect(600, 80, 161, 31));
        removeScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#removeScheduleButton {\n"
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
"QPushButton#removeScheduleButton:hover {\n"
"background-color: #69166f;\n"
"}\n"
"\n"
""));
        label = new QLabel(ClassScheduleManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 10, 181, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel#label{\n"
"  background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"}"));

        retranslateUi(ClassScheduleManagement);

        QMetaObject::connectSlotsByName(ClassScheduleManagement);
    } // setupUi

    void retranslateUi(QDialog *ClassScheduleManagement)
    {
        ClassScheduleManagement->setWindowTitle(QCoreApplication::translate("ClassScheduleManagement", "Class Schedule Management", nullptr));
        scheduleTable->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("ClassScheduleManagement", "ID", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Class Name", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Teacher ID", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Day", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Start Time", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "End Time", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Room", nullptr)}));
        editScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Edit Schedule", nullptr));
        addScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Add Schedule", nullptr));
        searchBar->setText(QString());
        searchBar->setPlaceholderText(QCoreApplication::translate("ClassScheduleManagement", "\360\237\224\215Search by Class Name... ", nullptr));
        viewScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "View Schedules", nullptr));
        removeScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Remove Schedule", nullptr));
        label->setText(QCoreApplication::translate("ClassScheduleManagement", "CLASS SCHEDULE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassScheduleManagement: public Ui_ClassScheduleManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSSCHEDULEMANAGEMENT_H
