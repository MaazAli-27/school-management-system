#include "StudentResult.h"
#include "ui_StudentResult.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QHeaderView>

StudentResult::StudentResult(QWidget *parent, int studentId) :
    QDialog(parent),
    ui(new Ui::StudentResult),
    studentId(studentId)
{
    ui->setupUi(this);
    setWindowTitle("My Results");
    loadResultData();

    // Connect grading formula button to show message
    connect(ui->gradingFormulaButton, &QPushButton::clicked, this, [=]() {
        QMessageBox::information(this, "Grading Formula",
                                 "A+: 90%-100%\n A  :  80%-89%\n B  :  70%-79%\n C  :  60%-69%\n D  :  50%-59%\n F  :  Below 50%");
    });
}

StudentResult::~StudentResult()
{
    delete ui;
}

void StudentResult::loadResultData()
{
    QSqlQuery query;
    query.prepare("SELECT student_name, class_name, subject, marks_obtained, total_marks FROM exam_results WHERE student_id = :student_id");
    query.bindValue(":student_id", studentId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to load result data: " + query.lastError().text());
        return;
    }

    // Setting up the table
    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);

        QString studentName = query.value(0).toString();
        QString className = query.value(1).toString();
        QString subject = query.value(2).toString();
        int marksObtained = query.value(3).toInt();
        int totalMarks = query.value(4).toInt();

        // Calculating Percentage and Grade
        double percentage = (static_cast<double>(marksObtained) / totalMarks) * 100;
        QString grade;

        if (percentage >= 90) grade = "A+";
        else if (percentage >= 80) grade = "A";
        else if (percentage >= 70) grade = "B";
        else if (percentage >= 60) grade = "C";
        else if (percentage >= 50) grade = "D";
        else grade = "F";

        // Filling table with data
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(studentName));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(className));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(subject));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(marksObtained)));
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(totalMarks)));
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(QString::number(percentage, 'f', 2) + "%"));
        ui->tableWidget->setItem(row, 6, new QTableWidgetItem(grade));

        row++;
    }

    // Adjust the columns to fit the content
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
