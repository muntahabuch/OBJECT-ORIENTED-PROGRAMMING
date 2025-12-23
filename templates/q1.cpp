#include <iostream>
using namespace std;

template <class T>
double average(T arr[], int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];

    return sum / size;
}

int main()
{
    int a[] = {1, 2, 3, 4};
    long b[] = {10, 20, 30};
    double c[] = {2.5, 3.5, 4.5};
    char d[] = {'a', 'b', 'c'};  // ASCII values

    cout << "Int average: " << average(a, 4) << endl;
    cout << "Long average: " << average(b, 3) << endl;
    cout << "Double average: " << average(c, 3) << endl;
    cout << "Char average: " << average(d, 3) << endl;

    return 0;
}
