#ifndef CPP_PATTERNS_STATISTICDISPLAY_H
#define CPP_PATTERNS_STATISTICDISPLAY_H


#include "Observer.h"

class StatisticDisplay : public Observer
{
public:
    StatisticDisplay();

    void update();
    void display();
};


#endif //CPP_PATTERNS_STATISTICDISPLAY_H
