#ifndef CPP_PATTERNS_WEATHERAPP_H
#define CPP_PATTERNS_WEATHERAPP_H

#include "Observer.h"

struct WeatherApp
{
    virtual void registerObserver(Observer * o) = 0;
    virtual void removeObserver(Observer * o) = 0;
    virtual void notifyObserver() = 0;
};
#endif //CPP_PATTERNS_WEATHERAPP_H
