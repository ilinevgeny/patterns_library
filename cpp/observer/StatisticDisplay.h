#ifndef CPP_PATTERNS_STATISTICDISPLAY_H
#define CPP_PATTERNS_STATISTICDISPLAY_H


#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherApp.h"

class StatisticDisplay : public Observer, public DisplayElement
{
private:
    int m_temperature;
    WeatherApp * wapp;
public:
    StatisticDisplay( WeatherApp * wapp );
    void update(int temperature);
    void display();
};


#endif //CPP_PATTERNS_STATISTICDISPLAY_H
