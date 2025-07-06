/********************************************************************************
** Form generated from reading UI file 'StudentManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGEMENT_H
#define UI_STUDENTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentManagement
{
public:
    QTableWidget *studentTable;
    QLineEdit *nameLineEdit;
    QPushButton *viewStudentButton;
    QPushButton *removeStudentButton;
    QPushButton *editStudentButton;
    QPushButton *addStudentButton;
    QLineEdit *classLineEdit;
    QLabel *label;

    void setupUi(QDialog *StudentManagement)
    {
        if (StudentManagement->objectName().isEmpty())
            StudentManagement->setObjectName("StudentManagement");
        StudentManagement->resize(612, 631);
        StudentManagement->setStyleSheet(QString::fromUtf8("QDialog#StudentManagement {\n"
"        background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        studentTable = new QTableWidget(StudentManagement);
        if (studentTable->columnCount() < 3)
            studentTable->setColumnCount(3);
        studentTable->setObjectName("studentTable");
        studentTable->setGeometry(QRect(10, 200, 591, 421));
        studentTable->setMaximumSize(QSize(1000, 600));
        studentTable->setStyleSheet(QString::fromUtf8("QTableWidget#studentTable {\n"
"  border: 1.5px solid #b0b0b0;  /* Softer grey border */\n"
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
"QTableWi"
                        "dget::item {\n"
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
        studentTable->setShowGrid(true);
        studentTable->setColumnCount(3);
        nameLineEdit = new QLineEdit(StudentManagement);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(10, 120, 261, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#nameLineEdit {\n"
"    color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        viewStudentButton = new QPushButton(StudentManagement);
        viewStudentButton->setObjectName("viewStudentButton");
        viewStudentButton->setEnabled(true);
        viewStudentButton->setGeometry(QRect(460, 70, 141, 31));
        viewStudentButton->setStyleSheet(QString::fromUtf8("QPushButton#viewStudentButton {\n"
" border: 1.5px solid #B89FD0;\n"
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
"QPushButton#viewStudentButton:hover {\n"
"background-color: #69166f;\n"
"}\n"
"\n"
""));
        removeStudentButton = new QPushButton(StudentManagement);
        removeStudentButton->setObjectName("removeStudentButton");
        removeStudentButton->setGeometry(QRect(310, 70, 141, 31));
        removeStudentButton->setStyleSheet(QString::fromUtf8("QPushButton#removeStudentButton {\n"
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
"QPushButton#removeStudentButton:hover {\n"
"background-color: #69166f;\n"
"}\n"
"\n"
""));
        editStudentButton = new QPushButton(StudentManagement);
        editStudentButton->setObjectName("editStudentButton");
        editStudentButton->setGeometry(QRect(160, 70, 141, 31));
        editStudentButton->setStyleSheet(QString::fromUtf8("QPushButton#editStudentButton {\n"
" border: 1.5px solid #B89FD0;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(95, 2, 95),\n"
"                            stop:1 rgb(216, 181, 221));\n"
"color:#e4c9f2;\n"
"font-weight:700;\n"
"   \n"
"}\n"
"\n"
"QPushButton#editStudentButton:hover {\n"
"\n"
"   background-color: #69166f;\n"
"       \n"
"}\n"
"\n"
""));
        addStudentButton = new QPushButton(StudentManagement);
        addStudentButton->setObjectName("addStudentButton");
        addStudentButton->setGeometry(QRect(10, 70, 141, 31));
        addStudentButton->setStyleSheet(QString::fromUtf8("QPushButton#addStudentButton {\n"
"     border: 1.5px solid #B89FD0;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(95, 2, 95),\n"
"                            stop:1 rgb(216, 181, 221));\n"
"color:#e4c9f2;\n"
"font-weight:700;\n"
"\n"
"}\n"
"\n"
"QPushButton#addStudentButton:hover {\n"
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        classLineEdit = new QLineEdit(StudentManagement);
        classLineEdit->setObjectName("classLineEdit");
        classLineEdit->setGeometry(QRect(10, 160, 261, 31));
        classLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#classLineEdit{\n"
"     color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}"));
        label = new QLabel(StudentManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 251, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel#label{\n"
"  background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"\n"
"}"));

        retranslateUi(StudentManagement);

        QMetaObject::connectSlotsByName(StudentManagement);
    } // setupUi

    void retranslateUi(QDialog *StudentManagement)
    {
        StudentManagement->setWindowTitle(QCoreApplication::translate("StudentManagement", "Manage Students", nullptr));
        studentTable->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("StudentManagement", "ID", nullptr),
            QCoreApplication::translate("StudentManagement", "Name", nullptr),
            QCoreApplication::translate("StudentManagement", "Class", nullptr)}));
        nameLineEdit->setText(QString());
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("StudentManagement", "\360\237\224\215Search by Student Name...", nullptr));
        viewStudentButton->setText(QCoreApplication::translate("StudentManagement", "View Students", nullptr));
        removeStudentButton->setText(QCoreApplication::translate("StudentManagement", "Remove Student", nullptr));
        editStudentButton->setText(QCoreApplication::translate("StudentManagement", "Edit Student", nullptr));
        addStudentButton->setText(QCoreApplication::translate("StudentManagement", "Add Student", nullptr));
        classLineEdit->setText(QString());
        classLineEdit->setPlaceholderText(QCoreApplication::translate("StudentManagement", "\360\237\224\215Search by Student Class...", nullptr));
        label->setText(QCoreApplication::translate("StudentManagement", "STUDENT MANAGMENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagement: public Ui_StudentManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
