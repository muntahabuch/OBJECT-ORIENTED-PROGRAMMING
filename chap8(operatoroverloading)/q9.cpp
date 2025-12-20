#include <iostream>
#include <process.h>   // for exit()
using namespace std;

const int LIMIT = 100;

class safearay
{
private:
    int arr[LIMIT];
    int lower, upper;

public:
    // Constructor with lower and upper bounds
    safearay(int l, int u)
    {
        lower = l;
        upper = u;
    }

    // Overloaded subscript operator
    int& operator[](int index)
    {
        if (index < lower || index > upper)
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[index - lower];   // mapping
    }
};

int main()
{
    safearay sa1(100, 109);

    // Insert elements
    for (int j = 100; j <= 109; j++)
        sa1[j] = j * 10;

    // Display elements
    for (int j = 100; j <= 109; j++)
        cout << "Element " << j << " is " << sa1[j] << endl;

    return 0;
}
