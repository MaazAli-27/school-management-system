/********************************************************************************
** Form generated from reading UI file 'ExamResultManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMRESULTMANAGEMENT_H
#define UI_EXAMRESULTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ExamResultManagement
{
public:
    QGroupBox *groupBox;
    QLineEdit *studentIdInput;
    QLabel *labelSubject;
    QLineEdit *marksInput;
    QLineEdit *studentNameInput;
    QLabel *labelClass;
    QLabel *labelStudentName;
    QLineEdit *classInput;
    QLabel *labelStudentId;
    QLineEdit *subjectInput;
    QLineEdit *totalmarksInput;
    QLabel *labelMarks;
    QLabel *labelTotalMarks;
    QPushButton *clearButton;
    QPushButton *updateButton;
    QPushButton *saveButton;
    QTableView *tableViewResults;
    QLineEdit *searchInput;
    QPushButton *searchButton;
    QLabel *label;

    void setupUi(QDialog *ExamResultManagement)
    {
        if (ExamResultManagement->objectName().isEmpty())
            ExamResultManagement->setObjectName("ExamResultManagement");
        ExamResultManagement->resize(695, 624);
        ExamResultManagement->setStyleSheet(QString::fromUtf8("QDialog#ExamResultManagement {\n"
"       background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        groupBox = new QGroupBox(ExamResultManagement);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 60, 691, 151));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border-radius: 10%;\n"
"     font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;}"));
        studentIdInput = new QLineEdit(groupBox);
        studentIdInput->setObjectName("studentIdInput");
        studentIdInput->setGeometry(QRect(80, 40, 171, 22));
        studentIdInput->setStyleSheet(QString::fromUtf8("QLineEdit#studentIdInput {\n"
"     color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        labelSubject = new QLabel(groupBox);
        labelSubject->setObjectName("labelSubject");
        labelSubject->setGeometry(QRect(360, 10, 71, 21));
        labelSubject->setStyleSheet(QString::fromUtf8("QLabel#labelSubject {\n"
"        font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        marksInput = new QLineEdit(groupBox);
        marksInput->setObjectName("marksInput");
        marksInput->setGeometry(QRect(480, 40, 171, 22));
        marksInput->setStyleSheet(QString::fromUtf8("QLineEdit#marksInput {\n"
"     color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        studentNameInput = new QLineEdit(groupBox);
        studentNameInput->setObjectName("studentNameInput");
        studentNameInput->setGeometry(QRect(80, 10, 171, 22));
        studentNameInput->setStyleSheet(QString::fromUtf8("QLineEdit#studentNameInput {\n"
"       color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        labelClass = new QLabel(groupBox);
        labelClass->setObjectName("labelClass");
        labelClass->setGeometry(QRect(10, 70, 61, 21));
        labelClass->setStyleSheet(QString::fromUtf8("QLabel#labelClass {\n"
"         font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        labelStudentName = new QLabel(groupBox);
        labelStudentName->setObjectName("labelStudentName");
        labelStudentName->setGeometry(QRect(10, 0, 81, 31));
        labelStudentName->setStyleSheet(QString::fromUtf8("QLabel#labelStudentName {\n"
"       font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        classInput = new QLineEdit(groupBox);
        classInput->setObjectName("classInput");
        classInput->setGeometry(QRect(80, 70, 171, 22));
        classInput->setStyleSheet(QString::fromUtf8("QLineEdit#classInput {\n"
"     color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        labelStudentId = new QLabel(groupBox);
        labelStudentId->setObjectName("labelStudentId");
        labelStudentId->setGeometry(QRect(10, 40, 111, 16));
        labelStudentId->setStyleSheet(QString::fromUtf8("QLabel#labelStudentId {\n"
"        font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        subjectInput = new QLineEdit(groupBox);
        subjectInput->setObjectName("subjectInput");
        subjectInput->setGeometry(QRect(480, 10, 171, 22));
        subjectInput->setStyleSheet(QString::fromUtf8("QLineEdit#subjectInput {\n"
"   color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        totalmarksInput = new QLineEdit(groupBox);
        totalmarksInput->setObjectName("totalmarksInput");
        totalmarksInput->setGeometry(QRect(480, 80, 171, 22));
        totalmarksInput->setStyleSheet(QString::fromUtf8("QLineEdit#totalmarksInput {\n"
"   color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        labelMarks = new QLabel(groupBox);
        labelMarks->setObjectName("labelMarks");
        labelMarks->setGeometry(QRect(360, 40, 71, 31));
        labelMarks->setStyleSheet(QString::fromUtf8("QLabel#labelMarks {\n"
"         font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        labelTotalMarks = new QLabel(groupBox);
        labelTotalMarks->setObjectName("labelTotalMarks");
        labelTotalMarks->setGeometry(QRect(360, 70, 111, 41));
        labelTotalMarks->setStyleSheet(QString::fromUtf8("QLabel#labelTotalMarks {\n"
"      font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(260, 120, 171, 29));
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton#clearButton {\n"
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
"QPushButton#clearButton:hover {\n"
" background-color: #69166f;\n"
"}\n"
"\n"
""));
        updateButton = new QPushButton(groupBox);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(450, 120, 171, 31));
        updateButton->setStyleSheet(QString::fromUtf8("QPushButton#updateButton {\n"
"  border: 1.5px solid #B89FD0;\n"
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
"QPushButton#updateButton:hover {\n"
"  \n"
"  background-color: #69166f;\n"
"}\n"
""));
        saveButton = new QPushButton(groupBox);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(70, 120, 171, 29));
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton#saveButton {\n"
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
"QPushButton#saveButton:hover {\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        tableViewResults = new QTableView(ExamResultManagement);
        tableViewResults->setObjectName("tableViewResults");
        tableViewResults->setGeometry(QRect(10, 280, 671, 331));
        tableViewResults->setStyleSheet(QString::fromUtf8("QTableView#tableViewResults {\n"
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
"QTa"
                        "bleWidget::item {\n"
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
        searchInput = new QLineEdit(ExamResultManagement);
        searchInput->setObjectName("searchInput");
        searchInput->setGeometry(QRect(10, 240, 561, 31));
        searchInput->setStyleSheet(QString::fromUtf8("QLineEdit#searchInput {\n"
"  color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        searchButton = new QPushButton(ExamResultManagement);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(580, 240, 91, 31));
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton#searchButton {\n"
"  border: 1.5px solid #B89FD0;\n"
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
"QPushButton#searchButton:hover {\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        label = new QLabel(ExamResultManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 10, 161, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel#label{\n"
"     background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"}"));

        retranslateUi(ExamResultManagement);

        QMetaObject::connectSlotsByName(ExamResultManagement);
    } // setupUi

    void retranslateUi(QDialog *ExamResultManagement)
    {
        ExamResultManagement->setWindowTitle(QCoreApplication::translate("ExamResultManagement", "Exam Result Management", nullptr));
        groupBox->setTitle(QString());
        labelSubject->setText(QCoreApplication::translate("ExamResultManagement", "Subject:", nullptr));
        labelClass->setText(QCoreApplication::translate("ExamResultManagement", "Class:", nullptr));
        labelStudentName->setText(QCoreApplication::translate("ExamResultManagement", "Name:", nullptr));
        labelStudentId->setText(QCoreApplication::translate("ExamResultManagement", "ID:", nullptr));
        labelMarks->setText(QCoreApplication::translate("ExamResultManagement", "Marks:", nullptr));
        labelTotalMarks->setText(QCoreApplication::translate("ExamResultManagement", "Total Marks:", nullptr));
        clearButton->setText(QCoreApplication::translate("ExamResultManagement", "Clear", nullptr));
        updateButton->setText(QCoreApplication::translate("ExamResultManagement", "Update", nullptr));
        saveButton->setText(QCoreApplication::translate("ExamResultManagement", "Save", nullptr));
        searchInput->setPlaceholderText(QCoreApplication::translate("ExamResultManagement", "\360\237\224\215Search by student ID or name...", nullptr));
        searchButton->setText(QCoreApplication::translate("ExamResultManagement", "Search", nullptr));
        label->setText(QCoreApplication::translate("ExamResultManagement", "RESULT ENTRY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamResultManagement: public Ui_ExamResultManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMRESULTMANAGEMENT_H
