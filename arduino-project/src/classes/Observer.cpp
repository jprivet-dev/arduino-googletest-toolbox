#ifndef OBSERVER_CPP
#define OBSERVER_CPP

class Observer
{
  public:
    Observer() {}
    
    void update() {}
};

class __observer
{
  public:
    __observer() {}

  public:
    virtual void notify() {}
};

#endif