#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QDialog>

namespace Ui {
class AdminPanel;
}

class AdminPanel : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPanel(QWidget *parent = nullptr);
    ~AdminPanel();

private slots:
    void openStudentManagement();
    void openTeacherManagement();
    void openClassScheduleManagement();
    void openAttendanceManagement();
    void openExamManagement();

private:
    Ui::AdminPanel *ui;
};

#endif
