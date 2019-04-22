#ifndef SUBJECT_CPP
#define SUBJECT_CPP

#include <vector>
#include <iostream>
#include <iomanip>

#include "../interfaces/SubjectInterface.cpp"
#include "Observer.cpp"

class Subject : public SubjectInterface
{
  protected:
    std::string name;

  private:
    std::vector<std::string> _observers;

  public:
    Subject(std::string _name) : name(_name) {}

    std::string getName()
    {
      return name;
    }

    void attach() {
      _observers.push_back("abc");
    }

    void detach() {}

    void notify() {}
};

#endif