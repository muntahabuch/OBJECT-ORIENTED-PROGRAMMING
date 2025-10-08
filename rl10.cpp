#include<iostream>
using namespace std;
int main()
{
    float p,s,d,s_p,d_p,total;
    cout << "enter your amount in pounds,shelling,pence : ";
    cin >> p >> s >> d ;
    cout << "you entered : " << p << " pounds," << s << " shellings," << d << " pence" << endl;
    s_p= s/20;
    d_p= d/240;
    total= p+ s_p + d_p;
    cout << "decimal amount in pounds : " << total << endl;


    return 0;




}
