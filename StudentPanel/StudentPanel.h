#ifndef STUDENTPANEL_H
#define STUDENTPANEL_H

#include <QDialog>
#include <QString>

namespace Ui {
class StudentPanel;
}

class StudentPanel : public QDialog
{
    Q_OBJECT

public:
    explicit StudentPanel(QWidget *parent, int studentId,const QString &studentName, const QString &studentClass);
    ~StudentPanel();

private slots:
    void on_personalInfoButton_clicked();
    void on_attendanceButton_clicked();
    void on_examButton_clicked();
    void on_scheduleButton_clicked();
    void on_resultButton_clicked();

private:
    Ui::StudentPanel *ui;
    int studentId;
    QString studentName;
    QString studentClass;
};

#endif // STUDENTPANEL_H
