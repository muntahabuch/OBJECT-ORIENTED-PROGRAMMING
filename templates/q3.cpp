#include <iostream>
using namespace std;

template <class T>
class Queue
{
private:
    T arr[5];
    int head, tail, count;

public:
    Queue()
    {
        head = tail = count = 0;
    }

    void insert(T item)
    {
        if(count == 5)
            throw "Queue Overflow";

        arr[tail] = item;
        tail = (tail + 1) % 5;
        count++;
    }

    T remove()
    {
        if(count == 0)
            throw "Queue Underflow";

        T item = arr[head];
        head = (head + 1) % 5;
        count--;
        return item;
    }
};

int main()
{
    Queue<int> q;

    try
    {
        q.insert(10);
        q.insert(20);
        cout << q.remove() << endl;
        cout << q.remove() << endl;
        cout << q.remove() << endl; // error
    }
    catch(const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}

