/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_username;
    QLineEdit *usernameInput;
    QLabel *label_password;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QLabel *label_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->setEnabled(true);
        Login->resize(1164, 521);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(500, 500));
        Login->setMaximumSize(QSize(10000, 10000));
        Login->setBaseSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(27, 6, 51, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Login->setPalette(palette);
        Login->setAcceptDrops(false);
        Login->setAutoFillBackground(false);
        Login->setStyleSheet(QString::fromUtf8("QDialog#Login{\n"
" background-color:#1B0633;\n"
"border:7.5px solid #B89AD8;\n"
"border-radius: 8%;\n"
"}\n"
"\n"
""));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 40, 121, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"        font-size: 39px;\n"
"       font-weight: bold;\n"
"color: #E8D4F4 ;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_username = new QLabel(Login);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(40, 130, 111, 51));
        label_username->setStyleSheet(QString::fromUtf8("QLabel#label_username {\n"
"        font-size: 23px;\n"
"        color: #E8D4F4;\n"
"       font-weight: bold;\n"
"}"));
        usernameInput = new QLineEdit(Login);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(40, 170, 341, 30));
        usernameInput->setStyleSheet(QString::fromUtf8("QLineEdit#usernameInput {\n"
"    color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 10px;\n"
"        font-size: 17px;\n"
"font-weight: 570;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color: #E8D4F4 ;\n"
"}\n"
""));
        label_password = new QLabel(Login);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(40, 220, 111, 30));
        label_password->setStyleSheet(QString::fromUtf8("QLabel#label_password {\n"
"        font-size: 23px;\n"
"        font-weight: bold;\n"
"color: #E8D4F4 ;\n"
"}"));
        passwordInput = new QLineEdit(Login);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(40, 250, 341, 30));
        passwordInput->setAutoFillBackground(false);
        passwordInput->setStyleSheet(QString::fromUtf8("QLineEdit#passwordInput {\n"
"   color:#1B0633;\n"
"    border: 3px solid #8d4d95;\n"
"    border-radius: 11px;\n"
"        font-size: 19px;\n"
"font-weight:bold;\n"
"padding: 0px 8px 0px 8px;\n"
"background-color:  #E8D4F4;\n"
"}\n"
""));
        passwordInput->setFrame(true);
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        passwordInput->setDragEnabled(false);
        passwordInput->setReadOnly(false);
        passwordInput->setClearButtonEnabled(true);
        loginButton = new QPushButton(Login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(40, 330, 341, 51));
        loginButton->setMaximumSize(QSize(2000, 2000));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton#loginButton {\n"
"   \n"
"    border: 1.5px solid #B89FD0;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 23px;\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 rgb(95, 2, 95),\n"
"                            stop:1 rgb(216, 181, 221));\n"
"color:#e4c9f2;\n"
"font-weight:1000;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #69166f;\n"
"}\n"
"\n"
""));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, -40, 781, 601));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(10000, 10000));
        label_2->setStyleSheet(QString::fromUtf8("QLabel#label_2 {\n"
"\n"
"}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/background/D:/Users/Dell/Downloads/login page.jpeg")));
        label_2->raise();
        label->raise();
        label_username->raise();
        usernameInput->raise();
        label_password->raise();
        passwordInput->raise();
        loginButton->raise();

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "School Management System", nullptr));
        label->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "Username", nullptr));
        usernameInput->setInputMask(QString());
        usernameInput->setPlaceholderText(QString());
        label_password->setText(QCoreApplication::translate("Login", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
