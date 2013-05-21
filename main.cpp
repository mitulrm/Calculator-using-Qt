#include "mainwindow.h"
#include <QApplication>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Calculator");
    QPalette Pal;
    Pal.setColor(QPalette::Background, Qt::black);
    w.setAutoFillBackground(true);
    w.setPalette(Pal);
    w.setStyleSheet("QPushButton:hover { color:yellow }");

    w.show();
    return a.exec();
}
