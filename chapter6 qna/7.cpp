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
        cout << "Enter degrees: ";
        cin >> degrees;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }

    
    void display() const
    {
        cout << degrees << "\xF8" << minutes << "' " << direction << endl;
    }
};

int main()
{
    
    angle a1(179, 59.9, 'E');

    cout << "Angle initialized using constructor:\n";
    a1.display();

    angle a2;
    char choice;

    
    do
    {
        cout << "\nEnter a new angle:\n";
        a2.getAngle();

        cout << "You entered:\n";
        a2.display();

        cout << "\nDo you want to enter another angle? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
