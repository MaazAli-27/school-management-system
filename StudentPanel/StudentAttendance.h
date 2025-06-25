#ifndef STUDENTATTENDANCE_H
#define STUDENTATTENDANCE_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class StudentAttendance;
}

class StudentAttendance : public QDialog
{
    Q_OBJECT

public:
    explicit StudentAttendance(QWidget *parent = nullptr, int studentId = -1);
    ~StudentAttendance();

private:
    Ui::StudentAttendance *ui;
    int studentId;
    QSqlQueryModel *model;

    void loadAttendanceRecords();
};

#endif // STUDENTATTENDANCE_H
