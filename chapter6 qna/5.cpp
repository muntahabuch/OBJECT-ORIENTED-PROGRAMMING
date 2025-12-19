#include <iostream>
using namespace std;

class date
{
private:
    int year;
    int month;
    int day;

public:
    void getdata()
    {
        cout << "enter date : ";
        cin >> year >> month >> day;
    }
    void showdata()
    {
        cout<<"the date is displayed as:"<<year<<"/"<<month<<"/"<<day;
    }
};
int main()
{
    date d1;
    d1.getdata();
    d1.showdata();
}


