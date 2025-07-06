/********************************************************************************
** Form generated from reading UI file 'TeacherManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERMANAGEMENT_H
#define UI_TEACHERMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherManagement
{
public:
    QTableWidget *teacherTable;
    QLabel *labelSubject;
    QLabel *labelName;
    QLineEdit *subjectLineEdit;
    QLineEdit *nameLineEdit;
    QPushButton *editTeacherButton;
    QPushButton *viewTeacherButton;
    QPushButton *removeTeacherButton;
    QPushButton *addTeacherButton;
    QLabel *label;

    void setupUi(QDialog *TeacherManagement)
    {
        if (TeacherManagement->objectName().isEmpty())
            TeacherManagement->setObjectName("TeacherManagement");
        TeacherManagement->resize(621, 612);
        TeacherManagement->setStyleSheet(QString::fromUtf8("QDialog#TeacherManagement {\n"
"        background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        teacherTable = new QTableWidget(TeacherManagement);
        if (teacherTable->columnCount() < 3)
            teacherTable->setColumnCount(3);
        teacherTable->setObjectName("teacherTable");
        teacherTable->setGeometry(QRect(10, 210, 601, 391));
        teacherTable->setStyleSheet(QString::fromUtf8("QTableWidget#teacherTable {\n"
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
"QTab"
                        "leWidget::item {\n"
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
        teacherTable->setColumnCount(3);
        labelSubject = new QLabel(TeacherManagement);
        labelSubject->setObjectName("labelSubject");
        labelSubject->setGeometry(QRect(10, 170, 71, 31));
        labelSubject->setStyleSheet(QString::fromUtf8("QLabel#labelSubject {\n"
"        font-size: 20px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        labelName = new QLabel(TeacherManagement);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(20, 130, 71, 31));
        labelName->setStyleSheet(QString::fromUtf8("QLabel#labelName {\n"
"        font-size: 20px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        subjectLineEdit = new QLineEdit(TeacherManagement);
        subjectLineEdit->setObjectName("subjectLineEdit");
        subjectLineEdit->setGeometry(QRect(90, 170, 521, 31));
        subjectLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#subjectLineEdit {\n"
"    color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"\n"
"}\n"
""));
        nameLineEdit = new QLineEdit(TeacherManagement);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(90, 130, 521, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#nameLineEdit {\n"
"     color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        editTeacherButton = new QPushButton(TeacherManagement);
        editTeacherButton->setObjectName("editTeacherButton");
        editTeacherButton->setGeometry(QRect(170, 80, 141, 31));
        editTeacherButton->setStyleSheet(QString::fromUtf8("QPushButton#editTeacherButton {\n"
"   border: 1.5px solid #B89FD0;\n"
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
"QPushButton#editTeacherButton:hover {\n"
"\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        viewTeacherButton = new QPushButton(TeacherManagement);
        viewTeacherButton->setObjectName("viewTeacherButton");
        viewTeacherButton->setEnabled(true);
        viewTeacherButton->setGeometry(QRect(470, 80, 141, 31));
        viewTeacherButton->setStyleSheet(QString::fromUtf8("QPushButton#viewTeacherButton {\n"
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
"QPushButton#viewTeacherButton:hover {\n"
"\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        removeTeacherButton = new QPushButton(TeacherManagement);
        removeTeacherButton->setObjectName("removeTeacherButton");
        removeTeacherButton->setGeometry(QRect(320, 80, 141, 31));
        removeTeacherButton->setStyleSheet(QString::fromUtf8("QPushButton#removeTeacherButton {\n"
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
"QPushButton#removeTeacherButton:hover {\n"
"\n"
"\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        addTeacherButton = new QPushButton(TeacherManagement);
        addTeacherButton->setObjectName("addTeacherButton");
        addTeacherButton->setGeometry(QRect(20, 80, 141, 31));
        addTeacherButton->setStyleSheet(QString::fromUtf8("QPushButton#addTeacherButton {\n"
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
"QPushButton#addTeacherButton:hover {\n"
"\n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        label = new QLabel(TeacherManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 251, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"  background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"\n"
"}"));

        retranslateUi(TeacherManagement);

        QMetaObject::connectSlotsByName(TeacherManagement);
    } // setupUi

    void retranslateUi(QDialog *TeacherManagement)
    {
        TeacherManagement->setWindowTitle(QCoreApplication::translate("TeacherManagement", "Manage Teachers", nullptr));
        teacherTable->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("TeacherManagement", "ID", nullptr),
            QCoreApplication::translate("TeacherManagement", "Name", nullptr),
            QCoreApplication::translate("TeacherManagement", "Subject", nullptr)}));
        labelSubject->setText(QCoreApplication::translate("TeacherManagement", "Subject", nullptr));
        labelName->setText(QCoreApplication::translate("TeacherManagement", "Name", nullptr));
        subjectLineEdit->setText(QString());
        subjectLineEdit->setPlaceholderText(QCoreApplication::translate("TeacherManagement", "\360\237\224\215Search by subject...", nullptr));
        nameLineEdit->setText(QString());
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("TeacherManagement", "\360\237\224\215Search by Name...", nullptr));
        editTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "Edit Teacher", nullptr));
        viewTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "View Teacher", nullptr));
        removeTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "Remove Teacher", nullptr));
        addTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "Add Teacher", nullptr));
        label->setText(QCoreApplication::translate("TeacherManagement", "TEACHER MANAGMENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherManagement: public Ui_TeacherManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERMANAGEMENT_H
