#ifndef EXAMRESULTMANAGEMENT_H
#define EXAMRESULTMANAGEMENT_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class ExamResultManagement;
}

class ExamResultManagement : public QDialog
{
    Q_OBJECT

public:
    explicit ExamResultManagement(QWidget *parent = nullptr,const QString& teacherName = "");
    ~ExamResultManagement();

private slots:
    void saveExamResult();
    void searchExamResult();
    void updateExamResult();
    void clearFields();

private:
    Ui::ExamResultManagement *ui;
    QSqlQueryModel *model;
    void loadExamResults();
    bool validateStudent(int studentId, const QString &studentName);
};

#endif // EXAMRESULTMANAGEMENT_H
