#ifndef OBSERVER_CPP
#define OBSERVER_CPP

class Observer
{
  public:
    Observer() {}
    
    void update() {}
};

class observer
{
  public:
    virtual void notify() = 0;
};

class observer_concrete : public observer
{
  public:
    virtual void notify() override
    { }
};

#endif