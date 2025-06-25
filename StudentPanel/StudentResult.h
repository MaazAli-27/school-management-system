#ifndef STUDENTRESULT_H
#define STUDENTRESULT_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class StudentResult;
}

class StudentResult : public QDialog
{
    Q_OBJECT

public:
    explicit StudentResult(QWidget *parent = nullptr, int studentId = -1);
    ~StudentResult();

private:
    Ui::StudentResult *ui;
    int studentId;
    QSqlQueryModel *model;

    void loadResultData();
};

#endif // STUDENTRESULT_H
