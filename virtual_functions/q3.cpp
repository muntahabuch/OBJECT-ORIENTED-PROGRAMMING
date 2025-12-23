#include <iostream>
using namespace std;

class Array
{
private:
    int* ptr;
    int size;

public:
    // constructor
    Array(int s)
    {
        size = s;
        ptr = new int[size];
    }

    // copy constructor (deep copy)
    Array(const Array& a)
    {
        size = a.size;
        ptr = new int[size];
        for(int i = 0; i < size; i++)
            ptr[i] = a.ptr[i];
    }

    // assignment operator
    Array& operator=(const Array& a)
    {
        if(this == &a)
            return *this;

        delete[] ptr;
        size = a.size;
        ptr = new int[size];

        for(int i = 0; i < size; i++)
            ptr[i] = a.ptr[i];

        return *this;
    }

    // subscript operator
    int& operator[](int index)
    {
        return ptr[index];
    }

    // destructor
    ~Array()
    {
        delete[] ptr;
    }
};

int main()
{
    Array arr1(5);
    for(int i = 0; i < 5; i++)
        arr1[i] = i * 10;

    Array arr2 = arr1;     // copy constructor
    Array arr3(5);
    arr3 = arr1;           // assignment operator

    cout << arr2[2] << endl;
    cout << arr3[4] << endl;

    return 0;
}
