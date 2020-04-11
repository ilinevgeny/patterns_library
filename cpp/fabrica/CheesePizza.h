#ifndef CPP_PATTERNS_CHEESEPIZZA_H
#define CPP_PATTERNS_CHEESEPIZZA_H

#include "../common.h"
#include "Pizza.h"
class CheesePizza : public Pizza
{
public:
    CheesePizza();
    ~CheesePizza();
    void prepare();
    void bake();
    void box();
};
#endif //CPP_PATTERNS_CHEESEPIZZA_H
