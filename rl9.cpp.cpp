#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,num,den;
    cout << "enter your fraction_1(a/b) : ";
    cin >> a >> b;
    cout << "enter your fraction_2(c/d) : ";
    cin >> c >> d;

    cout << "you entered fractions : "<< a <<"/"<< b << " and " << c << "/" << d << endl;
    cout << "addition of the fractions : ";

    // Formula to add two fractions: (a/b + c/d) = (a*d + b*c) / (b*d)
    num=(a*d) + (b*c);
    den=(b*d);
    cout << "addition of fractions :" << num << "/" << den << endl;



    return 0;




}
