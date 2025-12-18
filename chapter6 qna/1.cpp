#include <iostream>
using namespace std;

class Int
{
    private:int value;

    public:
    Int ()
    {
        value = 0;
    }
    Int (int val)
    {
        value = val;
    }
    Int add (Int m)
    {
        Int temp;
        temp.value = m.value + value;
        return temp;
    }
    void display()
    {
        cout << value;
    }
};
int main ()
{
    Int a;
    Int b(10);
    Int c(20);
    a = b.add(c);
    a.display();
    return 0;
}
