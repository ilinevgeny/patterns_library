#include "ForecastDisplay.h"

ForecastDisplay::ForecastDisplay(WeatherApp *wapp)
{
    this->wapp = wapp;
    this->wapp->registerObserver(this);
};

void ForecastDisplay::update(int forecast)
{
    this->m_forecast = forecast;
    std::cout << "\nUpdate ForecastDisplay. Temperature now is " << this->getForecast(forecast) <<  " degrees \n";
    //this->display();
};

int ForecastDisplay::getForecast(int forecast)
{
    return forecast + 5;
};

void ForecastDisplay::display()
{
    std::cout << "\nDisplay Forecast\n";
};
