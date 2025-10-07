#include <iostream>
#include <limits>
using namespace std;

int main() {
    char type; cout << "Enter type (i/f/d): "; cin >> type;
    double a,b,res;
    char op; cout << "Enter operator (+ - * / %): "; cin >> op;
    cout << "Enter two operands: "; cin >> a >> b;

    if(type=='i'){
        long long x=a, y=b;
        switch(op){
            case '+': res=x+y; break;
            case '-': res=x-y; break;
            case '*': res=x*y; break;
            case '/': res=y!=0?x/y:0; break;
            case '%': res=(int)y!=0? (int)x%(int)y:0; break;
        }
        if(res>INT_MAX || res<INT_MIN) cout << "Warning: Overflow/Underflow\n";
        cout << "Result: " << (int)res << endl;
    }
    else if(type=='f'){
        float x=a,y=b;
        switch(op){
            case '+': res=x+y; break;
            case '-': res=x-y; break;
            case '*': res=x*y; break;
            case '/': res=y!=0? x/y:0; break;
        }
        if(res>FLT_MAX || res< -FLT_MAX) cout << "Warning: Overflow/Underflow\n";
        cout << "Result: " << (float)res << endl;
    }
    else{
        double x=a,y=b;
        switch(op){
            case '+': res=x+y; break;
            case '-': res=x-y; break;
            case '*': res=x*y; break;
            case '/': res=y!=0? x/y:0; break;
        }
        cout << "Result: " << res << endl;
    }
}

