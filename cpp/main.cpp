#include <iostream>
#include "strategy/MallardDuck.h"
#include "strategy/FlyByRocket.h"
//#include "observer/WeatherAppMoscow.h"

struct Russia
{
    virtual void notResponsible() = 0;
};

class MainOfficial : public Russia
{
public:
    void notResponsible()
    {
        std::cout << "\nТяжкое наследие девяностых. Кхе-кхе. Сплотимся. \n";
    }
};

class PeskovsSenselessReply : public MainOfficial
{
public:
    void notResponsible()
    {
        std::cout << "\nВам лучше уточнить у соответствующих органов. \n\n";
    }
};

class AnyFromRussia : public MainOfficial
{
public:
    template < typename T>
    void notResponsible( T & object )
    {
        std::cout << "Я за " << object << " не отвечаю! \n";
    };
};


int main()
{
    system("chcp 65001");
    auto * putin = new MainOfficial();
    putin->notResponsible();
    auto * pesok = new PeskovsSenselessReply();
    pesok->notResponsible();
    auto * russian = new AnyFromRussia();
    russian->notResponsible("терминал");
    russian->notResponsible("уборку");
    russian->notResponsible("этот участок");
    russian->notResponsible("ваших соседей");
    russian->notResponsible("мобильную связь");
    russian->notResponsible("авиасообщение");
    russian->notResponsible("твое здоровье");
    russian->notResponsible("это программное обеспечение");
    russian->notResponsible("депутата");
    russian->notResponsible("страну");
    russian->notResponsible("себя");
    return 0;
}

//Duck *d = new MallardDuck();
//d->display();
//d->performFly();
//d->setFlyBehavior(new FlyByRocket());
//std::cout << "\n___Change flying mode___\n";
//d->performFly();
//std::cout << "Strategy pattern has been completed!";
