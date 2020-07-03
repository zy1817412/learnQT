#ifndef FORMB_H
#define FORMB_H

#include <QDialog>

namespace Ui {
class formb;
}

class formb : public QDialog
{
    Q_OBJECT

public:
    explicit formb(QWidget *parent = 0);
    ~formb();

private:
    Ui::formb *ui;
};

#endif // FORMB_H
