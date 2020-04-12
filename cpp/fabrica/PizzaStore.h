#ifndef CPP_PATTERNS_PIZZASTORE_H
#define CPP_PATTERNS_PIZZASTORE_H

#include "../common.h"
#include "SimplePizzaFactory.h"
class PizzaStore
{
public:
    PizzaStore(SimplePizzaFactory &factory);
    Pizza* createPizza(std::string typePizza);
private:
    SimplePizzaFactory& factory_;
};


#endif //CPP_PATTERNS_PIZZASTORE_H
