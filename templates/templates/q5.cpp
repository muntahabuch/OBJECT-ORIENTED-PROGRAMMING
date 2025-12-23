#include <iostream>
using namespace std;

template <class T>
T amax(T arr[], int size)
{
    T max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int a[] = {10, 50, 30};
    double b[] = {2.2, 5.5, 1.1};

    cout << "Max int: " << amax(a, 3) << endl;
    cout << "Max double: " << amax(b, 3) << endl;

    return 0;
}
