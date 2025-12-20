#include <iostream>
#include <cstdlib>
using namespace std;

class Int
{
private:
    int value;

public:
    // Default constructor
    Int()
    {
        value = 0;
    }

    // Parameterized constructor
    Int(int val)
    {
        value = val;
    }

    // Overloaded + operator with overflow check
    Int operator + (Int m)
    {
        long double result = (long double)value + m.value;

        if (result > 2147483647 || result < -2147483648)
        {
            cout << "Overflow detected. Program terminated.";
            exit(1);
        }

        Int temp;
        temp.value = (int)result;
        return temp;
    }

    void display()
    {
        cout << value;
    }
};

int main()
{
    Int a;
    Int b(10);
    Int c(20);

    a = b + c;     // operator + used instead of add()
    a.display();

    return 0;
}
