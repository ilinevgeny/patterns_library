#include "SimplePizzaFactory.h"

Pizza* SimplePizzaFactory::createPizza(std::string typePizza)
{
    if (typePizza == CheesePizzaType)
    {
        this->pizza = new CheesePizza();
    }
    return this->pizza;
}

SimplePizzaFactory::SimplePizzaFactory()
{

}
