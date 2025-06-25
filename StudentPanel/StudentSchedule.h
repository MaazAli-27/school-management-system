#ifndef STUDENTSCHEDULE_H
#define STUDENTSCHEDULE_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class StudentSchedule;
}

class StudentSchedule : public QDialog
{
    Q_OBJECT

public:
    explicit StudentSchedule(QWidget *parent = nullptr, const QString &studentClass = "");
    ~StudentSchedule();

private:
    Ui::StudentSchedule *ui;
    QString studentClass;
    QSqlQueryModel *model;
    void loadSchedule();
};

#endif // STUDENTSCHEDULE_H
