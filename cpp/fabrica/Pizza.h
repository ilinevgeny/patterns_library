#ifndef CPP_PATTERNS_PIZZA_H
#define CPP_PATTERNS_PIZZA_H


class Pizza
{
public:
    virtual void prepare() = 0;
    virtual void bake() = 0;
    virtual void box() = 0;
};


#endif //CPP_PATTERNS_PIZZA_H
