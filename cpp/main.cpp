#include <iostream>
#include "strategy/MallardDuck.h"
#include "strategy/FlyByRocket.h"
#include "observer/WeatherAppMoscow.h"
#include "observer/StatisticDisplay.h"
#include <boost/thread.hpp>
#include <boost/chrono.hpp>

int main()
{
    std::cout << "start registering observers\n";

    WeatherAppMoscow * wApp = new WeatherAppMoscow();
    Observer * stat = new StatisticDisplay();
    wApp->registerObserver(stat);

    std::cout << "end registering observers\n";

    wApp->removeObserver(stat);
    std::cout << "stop removing observers\n";
    return 0;
}

//Duck *d = new MallardDuck();
//d->display();
//d->performFly();
//d->setFlyBehavior(new FlyByRocket());
//std::cout << "\n___Change flying mode___\n";
//d->performFly();
//std::cout << "Strategy pattern has been completed!";
