#ifndef CLASSSCHEDULEMANAGEMENT_H
#define CLASSSCHEDULEMANAGEMENT_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class ClassScheduleManagement;
}

class ClassScheduleManagement : public QDialog {
    Q_OBJECT

public:
    explicit ClassScheduleManagement(QWidget *parent = nullptr);
    ~ClassScheduleManagement();

private slots:
    void addClassSchedule();
    void editClassSchedule();
    void removeClassSchedule();
    void viewClassSchedules();
    void searchClassSchedule(const QString &text);
    void updateTable();

private:
    Ui::ClassScheduleManagement *ui;
};

#endif
