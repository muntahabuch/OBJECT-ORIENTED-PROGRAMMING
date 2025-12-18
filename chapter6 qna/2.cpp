#include <iostream>
#include <conio.h>
using namespace std;

class TollBooth
{
private:
    unsigned int totalcars;
    double totalcash;

public:
    TollBooth()
    {
        totalcars = 0;
        totalcash = 0;
    }
    void payingcar()
    {
        totalcars++;
        totalcash += 0.50;
    }
    void nopaycar()
    {
        totalcars++;
    }
    void display()
    {
        cout << "total number of cars:";
        cout << "total amount collected:";
    }
};
int main()
{
    TollBooth booth;
    char ch;

    cout << "Press P for paying car\n";
    cout << "Press N for non-paying car\n";
    cout << "Press ESC to exit\n";

    while (1)
    {
        {
            ch = getch(); // get key without pressing Enter

            if (ch == 'P' || ch == 'p')
                booth.payingcar();

            else if (ch == 'N' || ch == 'n')
                booth.nopaycar();

            else if (ch == 27) // ASCII value of ESC key
                break;
        }

        booth.display();
        return 0;
    }
}

