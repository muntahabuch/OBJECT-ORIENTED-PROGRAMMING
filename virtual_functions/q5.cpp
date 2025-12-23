#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        show();   // calls Base version
    }

    virtual void show()
    {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived show()" << endl;
    }
};

int main()
{
    Derived d;
    return 0;
}
