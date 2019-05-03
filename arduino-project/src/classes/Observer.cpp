#ifndef OBSERVER_CPP
#define OBSERVER_CPP

class Observer
{
  public:
    Observer() {}
    
    void update() {}
};

class __Observer
{
  public:
    __Observer() {}

  public:
    virtual void notify() {}
};

#endif