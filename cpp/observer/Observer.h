#ifndef CPP_PATTERNS_OBSERVER_H
#define CPP_PATTERNS_OBSERVER_H
class Observer
{
public:
    virtual void update(int temperature) = 0;
};
#endif //CPP_PATTERNS_OBSERVER_H
