#include <algorithm>
#include <iostream>
#include "WeatherAppMoscow.h"

void WeatherAppMoscow::registerObserver(Observer * o)
{
    std::cout << "Now, we registered object\n";
    this->observers.push_back(o);
}

void WeatherAppMoscow::removeObserver(Observer * o)
{
    int index = this->findObserverInVector(this->observers, o);
    std::cout << "\n Index was found \n" << index;
    this->observers.erase(this->observers.begin() + index);
}

void WeatherAppMoscow::notifyObserver()
{
    for (auto observer : this->observers)
    {
        observer->update(this->temperature);
    }
}

void WeatherAppMoscow::measurementsChanged()
{
    this->notifyObserver();
}

void WeatherAppMoscow::getTemperature()
{

}

WeatherAppMoscow::WeatherAppMoscow()
{

}

template < typename T >
int WeatherAppMoscow::findObserverInVector(const std::vector<T> & observersContainer, const T & observer)
{
    int index;
    auto it = std::find(observersContainer.begin(), observersContainer.end(), observer);
    index = std::distance(observersContainer.begin(), it);
    return index;
}

void WeatherAppMoscow::setMeasurements(int tempereture)
{
    this->temperature = tempereture;
    this->measurementsChanged();
}

