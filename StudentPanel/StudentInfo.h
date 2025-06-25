#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <QDialog>

namespace Ui {
class StudentInfo;
}

class StudentInfo : public QDialog
{
    Q_OBJECT

public:
    explicit StudentInfo(QWidget *parent = nullptr, int studentId = -1);
    ~StudentInfo();

private:
    Ui::StudentInfo *ui;
    int studentId;

    void loadStudentInfo();
};

#endif // STUDENTINFO_H
