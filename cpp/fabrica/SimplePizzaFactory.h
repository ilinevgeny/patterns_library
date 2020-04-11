#ifndef CPP_PATTERNS_SIMPLEPIZZAFACTORY_H
#define CPP_PATTERNS_SIMPLEPIZZAFACTORY_H

#include "Pizza.h"
#include "CheesePizza.h"
#include "../common.h"
#define CheesePizzaType "cheese"
#define CheesePepperoniType "pepperoni"

class SimplePizzaFactory
{
public:
    SimplePizzaFactory();

    Pizza* createPizza(std::string typePizza);

private:
    Pizza* pizza;
};


#endif //CPP_PATTERNS_SIMPLEPIZZAFACTORY_H
