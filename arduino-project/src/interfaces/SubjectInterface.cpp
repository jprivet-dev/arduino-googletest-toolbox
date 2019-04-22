#ifndef SUBJECT_INTERFACE_CPP
#define SUBJECT_INTERFACE_CPP

#include <iostream>

struct SubjectInterface
{
  public:
    virtual ~SubjectInterface() {}
    virtual std::string getName() = 0;
};

#endif