#include <iostream>
using namespace std;

template <class T>
class Queue
{
private:
    T arr[5];
    int head, tail;

public:
    Queue()
    {
        head = tail = 0;
    }

    void insert(T item)
    {
        arr[tail] = item;
        tail = (tail + 1) % 5;
    }

    T remove()
    {
        T item = arr[head];
        head = (head + 1) % 5;
        return item;
    }
};

int main()
{
    Queue<int> q1;
    q1.insert(10);
    q1.insert(20);
    q1.insert(30);

    cout << q1.remove() << endl;
    cout << q1.remove() << endl;

    Queue<char> q2;
    q2.insert('A');
    q2.insert('B');

    cout << q2.remove() << endl;

    return 0;
}
