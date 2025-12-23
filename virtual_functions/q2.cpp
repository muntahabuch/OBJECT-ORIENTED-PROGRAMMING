#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    // default constructor
    Distance() : feet(0), inches(0.0) {}

    // one-argument constructor
    Distance(float dist)
    {
        feet = int(dist);
        inches = (dist - feet) * 12;
    }

    // two-argument constructor
    Distance(int f, float i) : feet(f), inches(i) {}

    // display
    void show()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // friend operator
    friend Distance operator*(float x, Distance d);
};

// friend function definition
Distance operator*(float x, Distance d)
{
    float totalFeet = x * (d.feet + d.inches / 12);
    return Distance(totalFeet);
}

// main
int main()
{
    Distance d1(5, 6);      // 5 feet 6 inches
    Distance d2;

    d2 = 7.5 * d1;          // float * object
    d2.show();

    return 0;
}
