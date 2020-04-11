#include "PizzaStore.h"

PizzaStore::PizzaStore(SimplePizzaFactory &factory) : __factory(factory)
{
    //this->__factory = factory;
}

Pizza* PizzaStore::createPizza(std::string typePizza)
{
    Pizza* pizza;
    pizza = this->__factory.createPizza(CheesePizzaType);
    pizza->box();
    return pizza;
}
