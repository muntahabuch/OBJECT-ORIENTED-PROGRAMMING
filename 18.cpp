#include <iostream>
using namespace std;

int main() {
    string s; cin.ignore(); getline(cin, s);
    int upper=0, lower=0, digit=0, space=0, special=0;
    for(char c: s){
        if(c>=65 && c<=90) upper++;
        else if(c>=97 && c<=122) lower++;
        else if(c>=48 && c<=57) digit++;
        else if(c==32) space++;
        else special++;
    }
    cout << "Upper=" << upper << " Lower=" << lower << " Digit=" << digit << " Space=" << space << " Special=" << special << endl;
}

