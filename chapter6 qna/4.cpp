#include <iostream>
using namespace std;

class employee
{
private:
    int emp_no;
    float emp_comp;

public:
    void inputfromuser()
    {
        cout << "enter the emp no and comp:";
        cin >> emp_no >> emp_comp;
    }
    void display()
    {
        cout << emp_no << endl;
        cout << emp_comp;
    }
};
int main()
{
    employee e1[3];
    for(int i=0;i<3;i++)
    {
        cout<<"enter the details of the employee:";
        e1[i].inputfromuser();
    }
    for(int i=0;i<3;i++)
    {
        
        e1[i].display();
    }
    
}