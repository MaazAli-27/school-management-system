#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Login;
}

class Login : public QDialog {
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginButton_clicked();  // Function when login button is clicked

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
