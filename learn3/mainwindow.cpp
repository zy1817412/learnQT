#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    string<<"糖糖宝贝"<<"我想你了"<<"就想告诉你"<<"我爱你";
    index=0;
    ui->pushButton->setText(string.at(index));
    //QObject::connect(ui->pushButton,&QPushButton::clicked,this ,&MainWindow::labelshow);

     QObject::connect(ui->pushButton,SIGNAL(clicked()),this ,SLOT(labelshow()));

    }

    MainWindow::~MainWindow()
    {
        delete ui;
    }

    void MainWindow::on_pushButton_clicked()
    {

            int count = string.count();
            index=index+1;
            index =((index)%count);
            ui->pushButton->setText(string.at(index));
    }
    void MainWindow::labelshow()
    {

            ui->label->setText(string.at(index));
    }

