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





