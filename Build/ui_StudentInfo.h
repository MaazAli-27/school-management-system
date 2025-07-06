/********************************************************************************
** Form generated from reading UI file 'StudentInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINFO_H
#define UI_STUDENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentInfo
{
public:
    QLabel *titleLabel;
    QPushButton *btnClose;
    QLineEdit *lineEditClass;
    QLineEdit *lineEditName;
    QLabel *label_id;
    QLineEdit *lineEditId;
    QLabel *label_class;
    QLabel *label_name;
    QLabel *label_password;
    QLineEdit *lineEditPassword;

    void setupUi(QDialog *StudentInfo)
    {
        if (StudentInfo->objectName().isEmpty())
            StudentInfo->setObjectName("StudentInfo");
        StudentInfo->resize(452, 349);
        StudentInfo->setStyleSheet(QString::fromUtf8("QDialog#StudentInfo {\n"
"       background-color:#1B0633;\n"
"border:5px solid #B89AD8;\n"
"        border-radius: 10%;\n"
"}"));
        titleLabel = new QLabel(StudentInfo);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(120, 10, 211, 41));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel {\n"
"    background-color: #3E0066;\n"
"  color: #E6CCE7;\n"
"  border: 2px solid #E7A9A9;\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  text-align: center;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnClose = new QPushButton(StudentInfo);
        btnClose->setObjectName("btnClose");
        btnClose->setGeometry(QRect(20, 290, 411, 41));
        btnClose->setStyleSheet(QString::fromUtf8("QPushButton#btnClose {\n"
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
"/* Hover effect */\n"
"QPushButton#btnClose:hover {\n"
" \n"
"   background-color: #69166f;\n"
"}\n"
"\n"
""));
        btnClose->setCheckable(false);
        btnClose->setChecked(false);
        lineEditClass = new QLineEdit(StudentInfo);
        lineEditClass->setObjectName("lineEditClass");
        lineEditClass->setGeometry(QRect(120, 180, 311, 31));
        lineEditClass->setStyleSheet(QString::fromUtf8("QLineEdit#lineEditClass {\n"
"       color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        lineEditClass->setReadOnly(true);
        lineEditName = new QLineEdit(StudentInfo);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(120, 130, 311, 31));
        lineEditName->setStyleSheet(QString::fromUtf8("QLineEdit#lineEditName {\n"
"        color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        lineEditName->setReadOnly(true);
        label_id = new QLabel(StudentInfo);
        label_id->setObjectName("label_id");
        label_id->setGeometry(QRect(20, 80, 111, 31));
        label_id->setStyleSheet(QString::fromUtf8("QLabel#label_id {\n"
" font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        lineEditId = new QLineEdit(StudentInfo);
        lineEditId->setObjectName("lineEditId");
        lineEditId->setGeometry(QRect(120, 80, 311, 31));
        lineEditId->setStyleSheet(QString::fromUtf8("QLineEdit#lineEditId {\n"
"     color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        lineEditId->setReadOnly(true);
        label_class = new QLabel(StudentInfo);
        label_class->setObjectName("label_class");
        label_class->setGeometry(QRect(20, 180, 61, 31));
        label_class->setStyleSheet(QString::fromUtf8("QLabel#label_class {\n"
"        font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        label_name = new QLabel(StudentInfo);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(20, 120, 71, 41));
        label_name->setStyleSheet(QString::fromUtf8("QLabel#label_name {\n"
"        font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        label_password = new QLabel(StudentInfo);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(10, 220, 101, 51));
        label_password->setStyleSheet(QString::fromUtf8("QLabel#label_password {\n"
"         font-size: 19px;\n"
"        color: #E8D4F4 ;\n"
"font-weight:700;\n"
"}"));
        lineEditPassword = new QLineEdit(StudentInfo);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(120, 230, 311, 31));
        lineEditPassword->setStyleSheet(QString::fromUtf8("QLineEdit#lineEditPassword {\n"
"      color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEditPassword->setReadOnly(true);

        retranslateUi(StudentInfo);

        QMetaObject::connectSlotsByName(StudentInfo);
    } // setupUi

    void retranslateUi(QDialog *StudentInfo)
    {
        StudentInfo->setWindowTitle(QCoreApplication::translate("StudentInfo", "Student Information", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentInfo", "STUDENT PROFILE", nullptr));
        btnClose->setText(QCoreApplication::translate("StudentInfo", "Close", nullptr));
        label_id->setText(QCoreApplication::translate("StudentInfo", "ID:", nullptr));
        label_class->setText(QCoreApplication::translate("StudentInfo", "Class:", nullptr));
        label_name->setText(QCoreApplication::translate("StudentInfo", "Name:", nullptr));
        label_password->setText(QCoreApplication::translate("StudentInfo", " Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInfo: public Ui_StudentInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINFO_H
