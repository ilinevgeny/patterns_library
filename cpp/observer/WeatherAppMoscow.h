#ifndef CPP_PATTERNS_WEATHERAPPMOSCOW_H
#define CPP_PATTERNS_WEATHERAPPMOSCOW_H

#include <array>
#include <vector>
#include "WeatherApp.h"

class WeatherAppMoscow : public WeatherApp

{
private:
    std::vector<Observer *> observers;
    int temperature;
public:
    WeatherAppMoscow();
    void registerObserver(Observer * o);
    void removeObserver(Observer * o);
    void notifyObserver();

    void measurementsChanged();
    void getTemperature();
    void setMeasurements(int temperature);
    template < typename T >
    int findObserverInVector(const std::vector<T> & observersContainer, const T & observer);
};


#endif //CPP_PATTERNS_WEATHERAPPMOSCOW_H
