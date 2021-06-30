//
// Created by ilin on 30.06.2021.
//

#ifndef CPP_PATTERNS_QUACKVOICE_H
#define CPP_PATTERNS_QUACKVOICE_H
#include "QuackBehavior.h"
#include "../common.h"
class QuackVoice : public QuackBehavior
{
public:
    QuackVoice();
    void quack();
};


#endif //CPP_PATTERNS_QUACKVOICE_H
