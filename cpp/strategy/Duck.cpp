#include "Duck.h"

Duck::Duck() {}

void Duck::setFlyBehavior(FlyBehavior *flb)
{
    this->flb = flb;
}

void Duck::performFly()
{
    this->flb->fly();
}

void Duck::setQuackStyle(QuackBehavior *quk)
{
    this->quk = quk;
}

void Duck::canQuack()
{
    this->quk->quack();
}





