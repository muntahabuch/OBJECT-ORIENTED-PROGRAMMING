#include <iostream>
#include <string>
using namespace std;

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

class disk : public publication
{
private:
    enum dtype { CD, DVD } type;
    char choice;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter disk type (c for CD, d for DVD): ";
        cin >> choice;
        type = (choice == 'c') ? CD : DVD;
    }

    void putdata()
    {
        publication::putdata();
        cout << "Disk type: " << (type == CD ? "CD" : "DVD") << endl;
    }
};

int main()
{
    disk d;

    d.getdata();
    d.putdata();

    return 0;
}
