#include <iostream>
#include "strategy/MallardDuck.h"
#include "strategy/FlyByRocket.h"

int main()
{
    Duck *d = new MallardDuck();
    d->display();
    d->performFly();
    d->setFlyBehavior(new FlyByRocket());
    std::cout << "\n___Change flying mode___\n";
    d->performFly();
    std::cout << "Strategy pattern has been completed!";
    return 0;
}
