#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }
};

// Derived class
class Student : public Person
{
public:
    void showAge()
    {
        cout << "Student age is: " << age << endl;
    }
};

int main()
{
    Student s;
    s.setAge(20);
    s.showAge();
    return 0;
}
