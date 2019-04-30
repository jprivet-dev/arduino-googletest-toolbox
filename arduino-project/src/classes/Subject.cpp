#ifndef SUBJECT_CPP
#define SUBJECT_CPP

#include <vector>
#include <iostream>
#include <iomanip>

#include "../interfaces/SubjectInterface.cpp"
#include "Observer.cpp"

class Subject : public SubjectInterface
{
  public:
    std::vector<std::string> observers;

  public:
    Subject() {}

    void attach(string observer) {
      observers.push_back(observer);
    }

    void detach() {}

    void notify() {}
};

#endif