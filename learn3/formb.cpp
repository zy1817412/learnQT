#include "formb.h"
#include "ui_formb.h"

formb::formb(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formb)
{
    ui->setupUi(this);
}

formb::~formb()
{
    delete ui;
}
