#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

  void on_pushButton_clicked();
  void labelshow();


private:
    Ui::MainWindow *ui;
    QStringList string;
    int index;
};

#endif // MAINWINDOW_H
