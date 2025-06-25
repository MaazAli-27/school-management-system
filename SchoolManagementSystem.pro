QT       += core gui
QT       += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AdminPanel/AdminPanel.cpp \
    AdminPanel/AttendanceManagement.cpp \
    AdminPanel/ClassScheduleManagement.cpp \
    DatabaseSetup.cpp \
    AdminPanel/ExamManagement.cpp \
    Login.cpp \
    AdminPanel/StudentManagement.cpp \
    StudentPanel/StudentAttendance.cpp \
    StudentPanel/StudentExam.cpp \
    StudentPanel/StudentInfo.cpp \
    StudentPanel/StudentPanel.cpp \
    AdminPanel/TeacherManagement.cpp \
    StudentPanel/StudentResult.cpp \
    StudentPanel/StudentSchedule.cpp \
    TeacherPanel/AttendanceMarkingViewing.cpp \
    TeacherPanel/ClassScheduleViewing.cpp \
    TeacherPanel/TeacherExamManagement.cpp \
    TeacherPanel/ExamResultManagement.cpp \
    TeacherPanel/TeacherPanel.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    AdminPanel/AdminPanel.h \
    AdminPanel/AttendanceManagement.h \
    AdminPanel/ClassScheduleManagement.h \
    DatabaseSetup.h \
    AdminPanel/ExamManagement.h \
    Login.h \
    AdminPanel/StudentManagement.h \
    StudentPanel/StudentAttendance.h \
    StudentPanel/StudentExam.h \
    StudentPanel/StudentInfo.h \
    StudentPanel/StudentPanel.h \
    AdminPanel/TeacherManagement.h \
    StudentPanel/StudentResult.h \
    StudentPanel/StudentSchedule.h \
    TeacherPanel/AttendanceMarkingViewing.h \
    TeacherPanel/ClassScheduleViewing.h \
    TeacherPanel/TeacherExamManagement.h \
    TeacherPanel/ExamResultManagement.h \
    TeacherPanel/TeacherPanel.h \
    mainwindow.h

FORMS += \
    AdminPanel/AdminPanel.ui \
    AdminPanel/AttendanceManagement.ui \
    AdminPanel/ClassScheduleManagement.ui \
    AdminPanel/ExamManagement.ui \
    Login.ui \
    AdminPanel/StudentManagement.ui \
    StudentPanel/StudentAttendance.ui \
    StudentPanel/StudentExam.ui \
    StudentPanel/StudentInfo.ui \
    StudentPanel/StudentPanel.ui \
    AdminPanel/TeacherManagement.ui \
    StudentPanel/StudentResult.ui \
    StudentPanel/StudentSchedule.ui \
    TeacherPanel/AttendanceMarkingViewing.ui \
    TeacherPanel/ClassScheduleViewing.ui \
    TeacherPanel/TeacherExamManagement.ui \
    TeacherPanel/ExamResultManagement.ui \
    TeacherPanel/TeacherPanel.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += "C:/Program Files/MySQL/mysql-connector-c-6.1.11-winx64/include"
LIBS += -L"C:/Program Files/MySQL/mysql-connector-c-6.1.11-winx64/lib" -llibmysql

DISTFILES +=

RESOURCES += \
    Images.qrc
