#include "PizzaStore.h"

PizzaStore::PizzaStore(SimplePizzaFactory &factory) : factory_(factory)
{
    //this->__factory = factory;
}

Pizza* PizzaStore::createPizza(std::string typePizza)
{
    Pizza* pizza;
    pizza = this->factory_.createPizza(CheesePizzaType);
    pizza->box();
    return pizza;
}
