//wap to practice operator loading : uninary
#include <iostream>
using namespace std;
class Complex
 {
    int r, i;
public:
    Complex(int a = 0, int b = 0) : r(a), i(b) {}

    Complex operator+(Complex c) 
	{
        return Complex(r + c.r, i + c.i);
    }

    void display()
	 { cout << r << " + " << i << "i" << endl; }
};

int main() 
{
    Complex c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2; 
    c3.display(); // 6 + 8i
}

