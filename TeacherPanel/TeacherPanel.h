#ifndef TEACHERPANEL_H
#define TEACHERPANEL_H

#include <QDialog>

namespace Ui {
class TeacherPanel;
}

class TeacherPanel : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherPanel(QWidget *parent = nullptr, const QString &teacherName = "",int teacherId = -1);
    ~TeacherPanel();

private slots:
    void openClassSchedule();
    void openExamResultManagement();
    void openAttendanceViewing();
    void openExamManagement();

private:
    Ui::TeacherPanel *ui;
    QString teacherName;
    int teacherId;
};

#endif
