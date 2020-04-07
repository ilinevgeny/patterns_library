#include <iostream>
#include "StatisticDisplay.h"

void StatisticDisplay::update(int temperature)
{
    this->m_temperature = temperature;
    std::cout << "\nUpdate StatisticDisplay. Temperature now is " << temperature <<  " degrees \n";
    //this->display();
}

void StatisticDisplay::display()
{
    std::cout << "\nDisplay Statistic\n";
}

StatisticDisplay::StatisticDisplay( WeatherApp * wapp )
{
    this->wapp = wapp;
    this->wapp->registerObserver(this);
}
