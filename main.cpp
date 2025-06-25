#include "login.h"
#include "DatabaseSetup.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    setupDatabase();
    Login loginWindow;
    loginWindow.show();
    app.setStyleSheet(
        "QMessageBox {"
        "color: #E8D4F4;"
        " background-color:#1B0633;"
        "border:3px solid #B89AD8;"
        "border-radius:10%;"
        "font-size: 18px;"
        "font-weight: bold;"
"}"
        "QMessageBox QLabel {"
        "color: #E8D4F4;"
        "}"

        "QPushButton {"
        "border: 1.5px solid #B89FD0;"
        "border-radius: 10px;"

       " font-size: 20px;"
        "background: qlineargradient(x1:0, y1:0, x2:1, y2:1,"
             "stop:0 rgb(60, 0, 60), "
            "stop:1 rgb(140, 110, 150));"
       " color: #e4c9f2;"
        "font-weight: 1000;"
      "}"

        "QPushButton:hover {"
        "background-color: #69166f;"
        "}"



        "QInputDialog{"
        "color: #E8D4F4 ;"
       " background-color:#1B0633;"
        "border:2px solid #B89AD8;"
        "border-radius: 8%; "
        "}"
        "QInputDialog QLabel {"
            "color: #E8D4F4 ;"
             "font-size: 16px;"
            "font-weight:650;"
        "}"
       " QInputDialog QLineEdit {"
        "color:#1B0633;"
        "border: 3px solid #8d4d95;"
       " border-radius: 10px;"
        "font-size: 17px;"
        "font-weight: 570;"
        "padding: 0px 8px 0px 8px;"
        "background-color: #E8D4F4 ;"
        "}"
        "QInputDialog QSpinBox {"
        "color:#1B0633;"
        "border: 3px solid #8d4d95;"
        " border-radius: 10px;"
        "font-size: 17px;"
        "font-weight: 570;"
        "padding: 0px 8px 0px 8px;"
        "background-color: #E8D4F4 ;"
        "}"
        "QInputDialog QAbstractItemView {"
        "color:#1B0633;"
        "border: 3px solid #8d4d95;"
        " border-radius: 10px;"
        "font-size: 17px;"
        "font-weight: 570;"
        "padding: 0px 8px 0px 8px;"
        "background-color: #E8D4F4 ;"
        "}"



        );

    return app.exec();
}
