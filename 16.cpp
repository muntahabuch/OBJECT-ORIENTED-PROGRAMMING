#include <iostream>
using namespace std;

int main() {
    float fc; double dc;
    cout << "Enter Celsius (float): "; cin >> fc;
    cout << "F: " << fc*9/5+32 << ", K: " << fc+273.15 << endl;
    cout << "Enter Celsius (double): "; cin >> dc;
    cout << "F: " << dc*9/5+32 << ", K: " << dc+273.15 << endl;
}

