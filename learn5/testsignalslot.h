#ifndef TESTSIGNALSLOT_H
#define TESTSIGNALSLOT_H

#include <QObject>

class testsignalslot : public QObject
{
    Q_OBJECT
public:
    explicit testsignalslot(QObject *parent = nullptr);

public slots:
    void getsignal();
signals:
    void mysignal();
};

#endif // TESTSIGNALSLOT_H
