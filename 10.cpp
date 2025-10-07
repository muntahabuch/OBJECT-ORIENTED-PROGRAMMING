#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;  
    char op;
    char type1, type2;           

    cout << "Enter first number and its type (i for int, f for float, d for double): ";
    cin >> num1 >> type1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number and its type (i for int, f for float, d for double): ";
    cin >> num2 >> type2;


    if (type1 == 'i' && type2 == 'i') {
        int a = static_cast<int>(num1);
        int b = static_cast<int>(num2);
        switch (op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': 
                if (b != 0)
                    result = a / b; 
                else {
                    cout << "Division by zero error.\n";
                    return 0;
                }
                break;
            default: cout << "Invalid operator.\n"; return 0;
        }
        cout << "Result (int): " << static_cast<int>(result) << endl;
    }
    else {
        // Promote to double if any operand is float or double
        switch (op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    cout << "Division by zero error.\n";
                    return 0;
                }
                break;
            default: cout << "Invalid operator.\n"; return 0;
        }
        cout << "Result (after type promotion): " << result << endl;
    }

    return 0;
}

