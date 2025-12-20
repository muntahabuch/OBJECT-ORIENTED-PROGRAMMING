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

    // Overloaded + operator
    Time operator + (const Time& t) const
    {
        Time temp;

        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes;
        temp.hours   = hours   + t.hours;

        temp.minutes += temp.seconds / 60;
        temp.seconds %= 60;

        temp.hours += temp.minutes / 60;
        temp.minutes %= 60;

        return temp;
    }

    void display() const
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }
};

int main()
{
    const Time t1(15, 20, 43);
    const Time t2(10, 54, 32);

    Time t3 = t1 + t2;   // operator + used here
    t3.display();

    return 0;
}
