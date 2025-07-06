/********************************************************************************
** Form generated from reading UI file 'ClassSchedule.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSSCHEDULE_H
#define UI_CLASSSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClassScheduleManagement
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *scheduleTable;
    QHBoxLayout *buttonLayout;
    QPushButton *addScheduleButton;
    QPushButton *editScheduleButton;
    QPushButton *removeScheduleButton;
    QPushButton *viewScheduleButton;
    QLineEdit *searchInput;
    QPushButton *searchButton;

    void setupUi(QDialog *ClassScheduleManagement)
    {
        if (ClassScheduleManagement->objectName().isEmpty())
            ClassScheduleManagement->setObjectName("ClassScheduleManagement");
        ClassScheduleManagement->resize(700, 500);
        verticalLayout = new QVBoxLayout(ClassScheduleManagement);
        verticalLayout->setObjectName("verticalLayout");
        scheduleTable = new QTableWidget(ClassScheduleManagement);
        scheduleTable->setObjectName("scheduleTable");
        scheduleTable->setColumnCount(7);

        verticalLayout->addWidget(scheduleTable);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        addScheduleButton = new QPushButton(ClassScheduleManagement);
        addScheduleButton->setObjectName("addScheduleButton");

        buttonLayout->addWidget(addScheduleButton);

        editScheduleButton = new QPushButton(ClassScheduleManagement);
        editScheduleButton->setObjectName("editScheduleButton");

        buttonLayout->addWidget(editScheduleButton);

        removeScheduleButton = new QPushButton(ClassScheduleManagement);
        removeScheduleButton->setObjectName("removeScheduleButton");

        buttonLayout->addWidget(removeScheduleButton);

        viewScheduleButton = new QPushButton(ClassScheduleManagement);
        viewScheduleButton->setObjectName("viewScheduleButton");

        buttonLayout->addWidget(viewScheduleButton);

        searchInput = new QLineEdit(ClassScheduleManagement);
        searchInput->setObjectName("searchInput");

        buttonLayout->addWidget(searchInput);

        searchButton = new QPushButton(ClassScheduleManagement);
        searchButton->setObjectName("searchButton");

        buttonLayout->addWidget(searchButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(ClassScheduleManagement);

        QMetaObject::connectSlotsByName(ClassScheduleManagement);
    } // setupUi

    void retranslateUi(QDialog *ClassScheduleManagement)
    {
        ClassScheduleManagement->setWindowTitle(QCoreApplication::translate("ClassScheduleManagement", "Class Schedule Management", nullptr));
        scheduleTable->setHorizontalHeaderLabels(QStringList{
            QCoreApplication::translate("ClassScheduleManagement", "ID", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Class Name", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Teacher ID", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Day", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Start Time", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "End Time", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Room", nullptr)});
        addScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Add Schedule", nullptr));
        editScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Edit Schedule", nullptr));
        removeScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Remove Schedule", nullptr));
        viewScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "View Schedules", nullptr));
        searchInput->setPlaceholderText(QCoreApplication::translate("ClassScheduleManagement", "Search by Class Name or Room", nullptr));
        searchButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassScheduleManagement: public Ui_ClassScheduleManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSSCHEDULE_H
