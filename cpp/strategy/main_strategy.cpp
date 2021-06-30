#include "../common.h"
#include "MallardDuck.h"
#include "FlyByRocket.h"
#include "QuackSilent.h"

int main()
{
    std::cout << "strategy pattern\n";

    Duck *d = new MallardDuck();
    d->display();
    d->performFly();
    d->setFlyBehavior(new FlyByRocket());
    std::cout << "\n___Change flying mode___\n";
    d->performFly();
    d->canQuack();
    d->setQuackStyle( new QuackSilent());
    d->canQuack();
    std::cout << "Strategy pattern has been completed!";
    return 0;
}