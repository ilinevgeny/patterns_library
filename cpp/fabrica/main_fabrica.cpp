#include "../common.h"
#include "CheesePizza.h"
#include "PizzaStore.h"
#include <exception>
class Bowl
{
public:
    Bowl();
    void crackEggs();
    void addEggs();
    void addButter();
    bool areUNextComponent(int youNum);

private:
    int currentQueue_;
};
bool Bowl::areUNextComponent(int youNum)
{
    if(this->currentQueue_ - youNum != -1)
    {
        std::cout << "Are you crazy? Move me to next! \n";
        return false;
    }
    return true;
}
void Bowl::crackEggs()
{
    int myQueue = 1;
    if(this->areUNextComponent(myQueue))
    {
        this->currentQueue_ = myQueue;
        std::cout << "eggs were cracked successfully! \n";
    } else {
        throw "process aborted";
    }
}

void Bowl::addEggs()
{
    int myQueue = 2;
    if(this->areUNextComponent(myQueue))
    {
        this->currentQueue_ = myQueue;
        std::cout << "eggs were added successfully! \n";
    } else {
        throw "process aborted";
    }
};

Bowl::Bowl()
{
    this->currentQueue_ = 0;
}

void Bowl::addButter()
{
    int myQueue = 3;
    if(this->areUNextComponent(myQueue))
    {
        this->currentQueue_ = myQueue;
        std::cout << "butter was added successfully! \n";
    } else {
        throw "process aborted";
    }
};

class CakeFactory
{
public:
    CakeFactory(Bowl* bowl);
    void addComponents();
private:
    Bowl* bowl_;
};
CakeFactory::CakeFactory(Bowl* bowl)
{
    this->bowl_ = bowl;
}

void CakeFactory::addComponents()
{
    try
    {
        this->bowl_->addEggs();
        this->bowl_->crackEggs();
        this->bowl_->addButter();

    } catch (...)
    {
        std::cerr << "please, check you sequences\n";
    }
};
int main()
{
    Bowl* bowl = new Bowl();
    CakeFactory* myCakeFactory = new CakeFactory(bowl);
    myCakeFactory->addComponents();
    return 0;
}


//std::cout << "start fabrica pattern \n";
//Pizza* chineze = new CheesePizza();
//chineze->bake();
//std::string type = "cheese";
//SimplePizzaFactory factory;
//PizzaStore *mosPizza = new PizzaStore(reinterpret_cast<SimplePizzaFactory &>(factory));
//mosPizza->createPizza(CheesePizzaType);
//std::cout << "finish fabrica pattern";