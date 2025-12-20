#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    // Default constructor
    Time()
    {
        hours = minutes = seconds = 0;
    }

    // Parameterized constructor
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Overloaded - operator (Time - Time)
    Time operator - (const Time& t) const
    {
        Time temp;

        int total1 = hours * 3600 + minutes * 60 + seconds;
        int total2 = t.hours * 3600 + t.minutes * 60 + t.seconds;

        int diff = total1 - total2;

        temp.hours = diff / 3600;
        diff %= 3600;
        temp.minutes = diff / 60;
        temp.seconds = diff % 60;

        return temp;
    }

    // Overloaded * operator (Time * float)
    Time operator * (float x) const
    {
        Time temp;

        int total = (hours * 3600 + minutes * 60 + seconds) * x;

        temp.hours = total / 3600;
        total %= 3600;
        temp.minutes = total / 60;
        temp.seconds = total % 60;

        return temp;
    }

    void display() const
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main()
{
    Time t1(5, 30, 20);
    Time t2(2, 15, 10);

    Time t3 = t1 - t2;      // subtraction
    cout << "After subtraction: ";
    t3.display();

    Time t4 = t1 * 2.0f;   // multiplication
    cout << "After multiplication: ";
    t4.display();

    return 0;
}
