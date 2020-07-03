#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);
     QApplication a(argc, argv);

     MainWindow w;
     w->setwindowTitle("图像采集");
     QPushButton b1 = new QPushButton"采集"；
     QPushButton b2 = new QPushButton"保存"；
      QObject::connect(b1,SIGNAL(clicked()),&app,SLOT(采集（）))；
      QObject::connect(b2,SIGNAL(clicked()),&app,SLOT(采集（）))；
     // w->setwindowTitle("图像采集");
      b1->show();
      b2->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


