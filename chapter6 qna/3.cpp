#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = minutes = seconds = 0;
    }

    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void add(const Time& t1, const Time& t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours   = t1.hours   + t2.hours;

        minutes += seconds / 60;
        seconds %= 60;

        hours += minutes / 60;
        minutes %= 60;
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
    Time t3;

    t3.add(t1, t2);
    t3.display();

    return 0;
}