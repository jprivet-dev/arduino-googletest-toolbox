using namespace std;

class MyClass
{
    string id;

  public:
    MyClass(string _id) : id(_id)
    {
    }

    string getId()
    {
        return id;
    }
};