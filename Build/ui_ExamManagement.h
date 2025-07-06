/********************************************************************************
** Form generated from reading UI file 'ExamManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMMANAGEMENT_H
#define UI_EXAMMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamManagement
{
public:
    QTableView *examTable;
    QPushButton *removeButton;
    QPushButton *editButton;
    QPushButton *addButton;
    QLineEdit *searchBar;
    QLabel *label;

    void setupUi(QWidget *ExamManagement)
    {
        if (ExamManagement->objectName().isEmpty())
            ExamManagement->setObjectName("ExamManagement");
        ExamManagement->resize(853, 593);
        ExamManagement->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        ExamManagement->setStyleSheet(QString::fromUtf8("QWidget#ExamManagement {\n"
"        background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        examTable = new QTableView(ExamManagement);
        examTable->setObjectName("examTable");
        examTable->setGeometry(QRect(10, 160, 831, 421));
        examTable->setStyleSheet(QString::fromUtf8("QTableView#examTable {\n"
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
"QTableView::"
                        "item {\n"
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
""));
        removeButton = new QPushButton(ExamManagement);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(480, 70, 121, 31));
        removeButton->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        removeButton->setStyleSheet(QString::fromUtf8("QPushButton#removeButton {\n"
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
"QPushButton#removeButton:hover {\n"
"background-color: #69166f;\n"
"}\n"
"\n"
""));
        editButton = new QPushButton(ExamManagement);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(340, 70, 121, 31));
        editButton->setStyleSheet(QString::fromUtf8("QPushButton#editButton {\n"
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
"QPushButton#editButton:hover {\n"
"background-color: #69166f;\n"
"}\n"
"\n"
""));
        addButton = new QPushButton(ExamManagement);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(200, 70, 121, 31));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton#addButton {\n"
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
"QPushButton#addButton:hover {\n"
"background-color: #69166f;\n"
"}\n"
"\n"
""));
        searchBar = new QLineEdit(ExamManagement);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(20, 120, 801, 31));
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
        label = new QLabel(ExamManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 10, 181, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel#label{\n"
"  background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"\n"
"}\n"
""));

        retranslateUi(ExamManagement);

        QMetaObject::connectSlotsByName(ExamManagement);
    } // setupUi

    void retranslateUi(QWidget *ExamManagement)
    {
        ExamManagement->setWindowTitle(QCoreApplication::translate("ExamManagement", "Exam Management", nullptr));
        removeButton->setText(QCoreApplication::translate("ExamManagement", "Remove Exam", nullptr));
        editButton->setText(QCoreApplication::translate("ExamManagement", "Edit Exam", nullptr));
        addButton->setText(QCoreApplication::translate("ExamManagement", "Add Exam", nullptr));
        searchBar->setText(QString());
        searchBar->setPlaceholderText(QCoreApplication::translate("ExamManagement", "\360\237\224\215Search by subject...", nullptr));
        label->setText(QCoreApplication::translate("ExamManagement", "EXAM SCHEDULE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamManagement: public Ui_ExamManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMMANAGEMENT_H
