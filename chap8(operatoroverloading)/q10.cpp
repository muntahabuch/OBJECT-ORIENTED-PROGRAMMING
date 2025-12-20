#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
    float r, a;

public:
    Polar(float r1 = 0, float a1 = 0)
    {
        r = r1;
        a = a1;
    }

    Polar operator+(Polar p)
    {
        float x = r * cos(a) + p.r * cos(p.a);
        float y = r * sin(a) + p.r * sin(p.a);
        return Polar(sqrt(x * x + y * y), atan2(y, x));
    }

    void show()
    {
        cout << r << ", " << a << endl;
    }
};

int main()
{
    Polar p1(5, 0.5), p2(4, 0.3);
    Polar p3 = p1 + p2;
    p3.show();
    return 0;
}
