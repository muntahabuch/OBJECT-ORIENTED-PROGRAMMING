#include <iostream>
using namespace std;

bool toBool(int x) { return x != 0; }

int main() {
    int a, b;
    char op;
    cout << "Enter first value (0/1): "; cin >> a;
    cout << "Enter operator (AND=A, OR=O, XOR=X, NOT=N): "; cin >> op;

    if(op != 'N') {
        cout << "Enter second value (0/1): "; cin >> b;
    }

    bool result;
    switch(op) {
        case 'A': result = toBool(a) && toBool(b); break;
        case 'O': result = toBool(a) || toBool(b); break;
        case 'X': result = toBool(a) ^ toBool(b); break;
        case 'N': result = !toBool(a); break;
    }
    cout << "Result: " << result << endl;

    // 3-variable truth table
    cout << "\nTruth Table for 3 variables (A AND B OR C):\n";
    cout << "A B C | Result\n";
    for(int A=0; A<=1; A++)
        for(int B=0; B<=1; B++)
            for(int C=0; C<=1; C++)
                cout << A << " " << B << " " << C << " | " << ( (A&&B)||C ) << endl;

    return 0;
}

