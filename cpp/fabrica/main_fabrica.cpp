#include "../common.h"
#include "CheesePizza.h"
#include "PizzaStore.h"

int main()
{
    std::cout << "start fabrica pattern \n";
    Pizza* chineze = new CheesePizza();
    chineze->bake();
    std::string type = "cheese";
    SimplePizzaFactory factory;
    PizzaStore *mosPizza = new PizzaStore(reinterpret_cast<SimplePizzaFactory &>(factory));
    mosPizza->createPizza(CheesePizzaType);
    std::cout << "finish fabrica pattern";
    return 0;
}

