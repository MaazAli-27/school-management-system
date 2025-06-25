#ifndef STUDENTEXAM_H
#define STUDENTEXAM_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class StudentExam;
}

class StudentExam : public QDialog
{
    Q_OBJECT

public:
    explicit StudentExam(QWidget *parent = nullptr, const QString &studentClass = "");
    ~StudentExam();

private:
    Ui::StudentExam *ui;
    QString studentClass;
    QSqlQueryModel *model;

    void loadAssignedExams();
};

#endif // STUDENTEXAMS_H
