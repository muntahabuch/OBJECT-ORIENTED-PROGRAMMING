#include <iostream>
using namespace std;

template <class T>
void swaps(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swaps(x, y);
    cout << x << " " << y << endl;

    double p = 1.5, q = 2.5;
    swaps(p, q);
    cout << p << " " << q << endl;

    char c1 = 'A', c2 = 'Z';
    swaps(c1, c2);
    cout << c1 << " " << c2 << endl;

    return 0;
}
