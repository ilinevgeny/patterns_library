#include "../common.h"
class MyInterface
{
public:
    // Empty virtual destructor for proper cleanup
    virtual ~MyInterface() {}

    virtual void Method1() = 0;
    virtual void Method2() = 0;
};
class ChildOfInterface : public MyInterface
{
public:
    ChildOfInterface();
    void Method1();
    void Method2();

};
ChildOfInterface::ChildOfInterface()
{
    std::cout << "I was created\n";
}
void ChildOfInterface::Method1() {

}
void ChildOfInterface::Method2() {

}
class MyAbstractClass
{
public:
    virtual ~MyAbstractClass(){};

    virtual void Method1(){};
    virtual void Method2(){};
    void Method3();
    virtual void Method4() = 0; // make MyAbstractClass not instantiable
};

class ChildOfAbstractClass : public  MyAbstractClass
{
public:
    ChildOfAbstractClass();
    void Method4();
};
ChildOfAbstractClass::ChildOfAbstractClass()
{
    std::cout << "I -- child of Abstract Class -- was created!";
}

void ChildOfAbstractClass::Method4() {
    std::cout << " Hey-hey!\n";
};
int main()
{
    ChildOfInterface * childInterface = new ChildOfInterface();
    MyAbstractClass * childOfAbstractClass = new ChildOfAbstractClass();
    childOfAbstractClass->Method4();
    return  0;
}
