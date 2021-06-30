//
// Created by Geirb on 25.03.2020.
//

#include <iostream>
#include "MallardDuck.h"
void MallardDuck::display()
{
    std::cout << "Mallard Duck was displayed\n";
}

MallardDuck::MallardDuck()
{
    this->flb = new FlyByWings();
    this->quk = new QuackVoice();
};