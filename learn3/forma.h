#ifndef FORMA_H
#define FORMA_H

#include <QDialog>

namespace Ui {
class FORMA;
}

class FORMA : public QDialog
{
    Q_OBJECT

public:
    explicit FORMA(QWidget *parent = 0);
    ~FORMA();

private:
    Ui::FORMA *ui;
};

#endif // FORMA_H
