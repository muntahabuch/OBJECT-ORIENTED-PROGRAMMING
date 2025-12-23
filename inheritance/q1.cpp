#include <iostream>
#include <string>
using namespace std;

// ---------- Base Class ----------
class publication
{
protected:
    string title;
    float price;

public:
    void getdata()
    {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore();
    }

    void putdata()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

// ---------- Derived Class: Book ----------
class book : public publication
{
private:
    int pages;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void putdata()
    {
        publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

// ---------- Derived Class: Tape ----------
class tape : public publication
{
private:
    float playtime;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playtime;
    }

    void putdata()
    {
        publication::putdata();
        cout << "Playing time: " << playtime << " minutes" << endl;
    }
};

// ---------- Main ----------
int main()
{
    book b;
    tape t;

    cout << "\n--- Book Data ---\n";
    b.getdata();

    cout << "\n--- Tape Data ---\n";
    t.getdata();

    cout << "\n--- Book Details ---\n";
    b.putdata();

    cout << "\n--- Tape Details ---\n";
    t.putdata();

    return 0;
}
