//
// Created by ilin on 24.03.2020.
//

#ifndef CPP_PATTERNS_DUCK_H
#define CPP_PATTERNS_DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{

public:
    FlyBehavior *flb;
    QuackBehavior *quk;
    Duck();

    virtual void display() = 0;
    void setFlyBehavior(FlyBehavior * flb);
    void performFly();
    void setQuackStyle(QuackBehavior * quk);
    void canQuack();
};

#endif //CPP_PATTERNS_DUCK_H
