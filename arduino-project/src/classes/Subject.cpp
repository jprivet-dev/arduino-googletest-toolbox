#ifndef SUBJECT_CPP
#define SUBJECT_CPP

using namespace std;

class Subject
{
  protected:
    string name;

  public:
    Subject(string _name) : name(_name)
    {
    }

    string getName()
    {
        return name;
    }
};

#endif