#ifndef SUBJECT_CPP
#define SUBJECT_CPP

#include "../interfaces/SubjectInterface.cpp"
#include "Observer.cpp"

class Subject : public SubjectInterface
{
  protected:
    std::string name;

  public:
    Subject(std::string _name) : name(_name) {}

    std::string getName()
    {
      return name;
    }

    void attach() {}

    void detach() {}

    void notify() {}
};

#endif