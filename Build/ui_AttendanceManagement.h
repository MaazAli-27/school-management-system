/********************************************************************************
** Form generated from reading UI file 'AttendanceManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEMANAGEMENT_H
#define UI_ATTENDANCEMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttendanceManagement
{
public:
    QLineEdit *searchBar;
    QTableView *attendanceTable;
    QPushButton *markAttendanceButton;
    QComboBox *attendanceTypeComboBox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *AttendanceManagement)
    {
        if (AttendanceManagement->objectName().isEmpty())
            AttendanceManagement->setObjectName("AttendanceManagement");
        AttendanceManagement->setEnabled(true);
        AttendanceManagement->resize(550, 543);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AttendanceManagement->sizePolicy().hasHeightForWidth());
        AttendanceManagement->setSizePolicy(sizePolicy);
        AttendanceManagement->setMouseTracking(false);
        AttendanceManagement->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        AttendanceManagement->setStyleSheet(QString::fromUtf8("QWidget#AttendanceManagement {\n"
"         background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        searchBar = new QLineEdit(AttendanceManagement);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(20, 80, 241, 31));
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit#searchBar {\n"
"    color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        attendanceTable = new QTableView(AttendanceManagement);
        attendanceTable->setObjectName("attendanceTable");
        attendanceTable->setGeometry(QRect(10, 180, 531, 351));
        attendanceTable->setStyleSheet(QString::fromUtf8("QTableView#attendanceTable {\n"
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
"QTableView QTableCornerButton::section {\n"
"    background-color: #8a8a8a;    /* Match header color */\n"
"    border: none;\n"
"}\n"
"\n"
"QTable"
                        "View::item {\n"
"    padding: 8px 10px;\n"
"    font-size: 10pt;\n"
"    color: #1f1f1f;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #b0b0b0;\n"
"    color: #000000;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        markAttendanceButton = new QPushButton(AttendanceManagement);
        markAttendanceButton->setObjectName("markAttendanceButton");
        markAttendanceButton->setGeometry(QRect(170, 130, 201, 41));
        markAttendanceButton->setStyleSheet(QString::fromUtf8("QPushButton#markAttendanceButton {\n"
"     border: 1.5px solid #B89FD0;\n"
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
"QPushButton#markAttendanceButton:hover {\n"
" background-color: #69166f;\n"
"       \n"
"}\n"
"\n"
""));
        attendanceTypeComboBox = new QComboBox(AttendanceManagement);
        attendanceTypeComboBox->addItem(QString());
        attendanceTypeComboBox->addItem(QString());
        attendanceTypeComboBox->setObjectName("attendanceTypeComboBox");
        attendanceTypeComboBox->setGeometry(QRect(440, 80, 91, 31));
        attendanceTypeComboBox->setStyleSheet(QString::fromUtf8("QComboBox#attendanceTypeComboBox {\n"
"    border: 2px solid #e4c9f2;\n"
"    border-radius: 6px;\n"
"        padding: 6px;\n"
"    font-size: 12pt;\n"
"    background-color: #1B0633;\n"
"   color: #e4c9f2;\n"
"}\n"
"QComboBox#attendanceTypeComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 22px;\n"
"border-top-right-radius: 6px;\n"
"    border-bottom-right-radius: 6px;\n"
"    background-color: #1B0633;\n"
"    \n"
"}\n"
""));
        label = new QLabel(AttendanceManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 80, 121, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"        font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        label_2 = new QLabel(AttendanceManagement);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 10, 291, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel#label_2{\n"
"  background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"\n"
"}"));

        retranslateUi(AttendanceManagement);

        QMetaObject::connectSlotsByName(AttendanceManagement);
    } // setupUi

    void retranslateUi(QWidget *AttendanceManagement)
    {
        AttendanceManagement->setWindowTitle(QCoreApplication::translate("AttendanceManagement", "Attendance Management", nullptr));
        searchBar->setInputMask(QString());
        searchBar->setText(QString());
        searchBar->setPlaceholderText(QCoreApplication::translate("AttendanceManagement", "\360\237\224\215Search by ID or Name...", nullptr));
        markAttendanceButton->setText(QCoreApplication::translate("AttendanceManagement", "Mark Attendance", nullptr));
        attendanceTypeComboBox->setItemText(0, QCoreApplication::translate("AttendanceManagement", "Student", nullptr));
        attendanceTypeComboBox->setItemText(1, QCoreApplication::translate("AttendanceManagement", "Teacher", nullptr));

        label->setText(QCoreApplication::translate("AttendanceManagement", "Select Type:", nullptr));
        label_2->setText(QCoreApplication::translate("AttendanceManagement", "ATTENDENCE MANAGMENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttendanceManagement: public Ui_AttendanceManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEMANAGEMENT_H
