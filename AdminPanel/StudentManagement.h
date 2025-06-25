#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class StudentManagement;
}

class StudentManagement : public QDialog {
    Q_OBJECT

public:
    explicit StudentManagement(QWidget *parent = nullptr);
    ~StudentManagement();

private slots:
    void addStudent();
    void editStudent();
    void removeStudent();
    void viewStudents();
    void updateTable();
    void filterStudents();

private:
    Ui::StudentManagement *ui;
    void resetAutoIncrement();
    QSqlDatabase db;
    QString generateRandomPassword(int length = 4);
};

#endif
