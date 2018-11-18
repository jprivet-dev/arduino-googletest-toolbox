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

    void setValue(int value)
    {
        _value = value;
    }

    int getValue() {
        return _value;
    }

    void increment(int increment)
    {
        _value += increment;
    }

  private:
    int _value;
};