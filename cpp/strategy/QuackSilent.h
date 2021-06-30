//
// Created by ilin on 30.06.2021.
//

#ifndef CPP_PATTERNS_QUACKSILENT_H
#define CPP_PATTERNS_QUACKSILENT_H
#include "QuackBehavior.h"
#include "../common.h"
class QuackSilent : public QuackBehavior
{
public:
    QuackSilent()
    {

    }
    void quack();
};


#endif //CPP_PATTERNS_QUACKSILENT_H
