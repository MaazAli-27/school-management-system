#ifndef ATTENDANCEMARKINGVIEWING_H
#define ATTENDANCEMARKINGVIEWING_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class AttendanceMarkingViewing;
}

class AttendanceMarkingViewing : public QDialog
{
    Q_OBJECT

public:
    explicit AttendanceMarkingViewing(QWidget *parent = nullptr, int teacherId=-1);
    ~AttendanceMarkingViewing();

private:
    Ui::AttendanceMarkingViewing *ui;
    int teacherId;

    void loadAttendanceRecords();
};

#endif
