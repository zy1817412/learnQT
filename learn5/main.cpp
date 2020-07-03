#include "mainwindow.h"
#include <QApplication>
#include"testsignalslot.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testsignalslot();
    MainWindow w;
    w.show();

    return a.exec();
}
