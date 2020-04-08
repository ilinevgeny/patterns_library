#include "common.h"
#include "strategy/MallardDuck.h"
#include "strategy/FlyByRocket.h"
#include "observer/WeatherAppMoscow.h"
#include "observer/StatisticDisplay.h"
#include "observer/ForecastDisplay.h"


int main()
{
    std::cout << "start registering observers\n";

     WeatherAppMoscow * wApp = new WeatherAppMoscow();
    Observer * stat = new StatisticDisplay(wApp);
    Observer * forecast = new ForecastDisplay(wApp);
    wApp->setMeasurements(20);
    wApp->setMeasurements(74);
    wApp->setMeasurements(33);

//    wApp->registerObserver(stat);
    //std::cout << "end registering observers\n";

    //wApp->removeObserver(stat);
    std::cout << "stop observing observers\n";
    return 0;
}

//Duck *d = new MallardDuck();
//d->display();
//d->performFly();
//d->setFlyBehavior(new FlyByRocket());
//std::cout << "\n___Change flying mode___\n";
//d->performFly();
//std::cout << "Strategy pattern has been completed!";
