#ifndef TEACHEREXAMMANAGEMENT_H
#define TEACHEREXAMMANAGEMENT_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class TeacherExamManagement;
}

class TeacherExamManagement : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherExamManagement(const QString& teacherName, QWidget *parent = nullptr);
    ~TeacherExamManagement();

private slots:
    void onSearchTextChanged(const QString &text);

private:
    Ui::TeacherExamManagement *ui;
    QSqlQueryModel *model;
    QString teacherName;

    void loadAssignedExams();
};

#endif
