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
    virtual void getdata()
    {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore();
    }

    virtual void putdata()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    virtual ~publication() {}   // good practice
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
    publication* pubarr[10];   // array of base-class pointers
    int n = 0;
    char choice;

    do
    {
        cout << "\nEnter b for book or t for tape: ";
        cin >> choice;
        cin.ignore();

        if(choice == 'b')
            pubarr[n] = new book;
        else
            pubarr[n] = new tape;

        pubarr[n]->getdata();
        n++;

        cout << "Enter another? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while(choice == 'y');

    cout << "\n--- Displaying Data ---\n";
    for(int j = 0; j < n; j++)
        pubarr[j]->putdata();   // virtual call

    return 0;
}
