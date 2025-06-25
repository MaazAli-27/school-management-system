#ifndef TEACHERMANAGEMENT_H
#define TEACHERMANAGEMENT_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class TeacherManagement;
}

class TeacherManagement : public QDialog {
    Q_OBJECT

public:
    explicit TeacherManagement(QWidget *parent = nullptr);
    ~TeacherManagement();

private slots:
    void addTeacher();
    void editTeacher();
    void removeTeacher();
    void viewTeacher();
    void updateTable();
    void filterTeachers();

private:
    Ui::TeacherManagement *ui;
    void resetAutoIncrement();
    QSqlDatabase db;
    QString generateRandomPassword(int length = 4);
};

#endif
