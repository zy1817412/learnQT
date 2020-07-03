#include "testsignalslot.h"
#include "QDebug"

testsignalslot::testsignalslot(QObject *parent) : QObject(parent)
{
connect(this,SIGNAL(mysignal()),this,SLOT(getsignal()));
emit mysignal();
}
void testsignalslot::getsignal()
{
    qDebug()<<"获得一个信号";

}
