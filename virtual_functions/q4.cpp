#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    virtual void show()
    {
        cout << "This is Base class show()" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void show()
    {
        cout << "This is Derived class show()" << endl;
    }
};

int main()
{
    Base* b;          // base class pointer
    Derived d;        // derived class object

    b = &d;           // base pointer points to derived object
    b->show();        // calls Derived's show()

    return 0;
}
