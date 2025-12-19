#include <iostream>
using namespace std;


class angle
{
private:
    int degrees;
    float minutes;
    char direction;   

public:
    angle()
    {
        degrees = 0;
        minutes = 0.0;
        direction = 'N';
    }

    angle(int d, float m, char dir)
    {
        degrees = d;
        minutes = m;
        direction = dir;
    }

    void getAngle()
    {
        cin >> degrees >> minutes >> direction;
    }

    void display() const
    {
        cout << degrees << "\xF8" << minutes << "' " << direction;
    }
};


class ship
{
private:
    static int count;     
    int shipNo;           
    angle latitude;       
    angle longitude;

public:
    ship()
    {
        count++;
        shipNo = count;
    }

    void getPosition()
    {
        cout << "Enter latitude (deg min dir): ";
        latitude.getAngle();

        cout << "Enter longitude (deg min dir): ";
        longitude.getAngle();
    }

    void display() const
    {
        cout << "\nShip Number: " << shipNo << endl;
        cout << "Latitude : ";
        latitude.display();
        cout << endl;
        cout << "Longitude: ";
        longitude.display();
        cout << endl;
    }
};


int main()
{
    ship s1, s2, s3;

    cout << "\nEnter position for Ship 1\n";
    s1.getPosition();

    cout << "\nEnter position for Ship 2\n";
    s2.getPosition();

    cout << "\nEnter position for Ship 3\n";
    s3.getPosition();

    cout << "\n--- Ship Positions ---\n";
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
