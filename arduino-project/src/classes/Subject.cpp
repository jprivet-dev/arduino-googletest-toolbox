#ifndef SUBJECT_CPP
#define SUBJECT_CPP

#include <vector>
#include <functional>
#include <iostream>
#include <iomanip>
#include <list>

#include "../interfaces/SubjectInterface.cpp"
#include "Observer.cpp"

class Subject : public SubjectInterface
{
  public:
    std::vector<std::reference_wrapper<__observer>> observersObj;
    std::vector<std::string> observers;
    std::list<__observer*> observersList;

  public:
    Subject() {}

    void attach(std::string observer) {
      observers.push_back(observer);
    }

    void attachObj(__observer *o)
    {
      observersList.push_back(o);
    }
    
    void notify_observersObj()
    {
      for (__observer& o : observersObj) {
        o.notify();
      }
    }
};

#endif