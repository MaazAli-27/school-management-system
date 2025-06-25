#include "Login.h"
#include "ui_Login.h"
#include "AdminPanel/AdminPanel.h"
#include "StudentPanel/StudentPanel.h"
#include "TeacherPanel/TeacherPanel.h"
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

Login::Login(QWidget *parent) : QDialog(parent), ui(new Ui::Login) {
    QSqlDatabase db = QSqlDatabase::database();
    ui->setupUi(this);
}

Login::~Login() {
    delete ui;
}
// Handle login when button is clicked
void Login::on_loginButton_clicked() {
    QString username = ui->usernameInput->text().trimmed();
    QString password = ui->passwordInput->text().trimmed();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Login Failed", "Please enter username and password.");
        return;
    }
    // Check if it's an Admin
    QSqlQuery query;
    query.prepare("SELECT password FROM login_credentials WHERE BINARY user_id = :username");
    query.bindValue(":username", username);
    if (query.exec() && query.next()) {
        if (query.value(0).toString() == password) {
            QMessageBox::information(this, "Login Successful", "Welcome, Admin!");
            // Open Admin Panel
            AdminPanel *admin = new AdminPanel();
            admin->show();
            return;
        }
    }
    // Check if it's a Student
    query.prepare("SELECT id,password,class FROM students WHERE BINARY name = :username");
    query.bindValue(":username", username);
    if (query.exec() && query.next()) {
        QString dbPassword = query.value(1).toString();
        if (dbPassword == password) {
            int studentId = query.value(0).toInt();
            QString studentClass = query.value(2).toString();
            QString studentName = username;
            QMessageBox::information(this, "Login Successful", "Welcome, Student! ");
            StudentPanel *panel = new StudentPanel(this, studentId, studentName, studentClass);
            panel->exec();
            return;
        }
    }
    // Check if it's a Teacher
    query.prepare("SELECT id, name, password FROM teachers WHERE BINARY name = :username");
    query.bindValue(":username", username);
    if (query.exec() && query.next()) {
        int teacherId = query.value(0).toInt();
        QString teacherName = query.value(1).toString().trimmed();  // Get teacher name from DB
        QString dbPassword = query.value(2).toString().trimmed();        // Get password from DB
        if (dbPassword == password.trimmed()) {
            QMessageBox::information(this, "Login Successful", "Welcome, Teacher!");
            TeacherPanel *panel = new TeacherPanel(this, teacherName, teacherId);
            panel->exec();
        }    return;
    }
    // If no valid user is found
    QMessageBox::warning(this, "Login Failed", "Invalid username or password.");

}
