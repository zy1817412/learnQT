#include "forma.h"
#include "ui_forma.h"

FORMA::FORMA(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FORMA)
{
    ui->setupUi(this);
}

FORMA::~FORMA()
{
    delete ui;
}
