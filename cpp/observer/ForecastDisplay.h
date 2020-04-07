#ifndef CPP_PATTERNS_FORECASTDISPLAY_H
#define CPP_PATTERNS_FORECASTDISPLAY_H

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherApp.h"
#include <iostream>

class ForecastDisplay : public Observer, public DisplayElement
{
private:
    WeatherApp * wapp;
    int m_forecast;
public:
    ForecastDisplay(WeatherApp * wapp);
    void update(int forecast);
    int getForecast(int forecast);
    void display();
};


#endif //CPP_PATTERNS_FORECASTDISPLAY_H
