#ifndef CLASSSCHEDULEVIEWING_H
#define CLASSSCHEDULEVIEWING_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class ClassScheduleViewing;
}

class ClassScheduleViewing : public QDialog
{
    Q_OBJECT

public:
    explicit ClassScheduleViewing(QWidget *parent = nullptr, const QString &teacherName = "");
    ~ClassScheduleViewing();

private:
    Ui::ClassScheduleViewing *ui;
    QSqlQueryModel *model;
    QString teacherName;

    void loadClassSchedule();
};

#endif
