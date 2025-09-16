#include<iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int guests, chairs;
    cout << "Enter number of guests: ";
    cin >> guests;
    cout << "Enter number of chairs: ";
    cin >> chairs;

    if (chairs > guests) {
        cout << "Number of chairs cannot be greater than number of guests." << endl;
    } else {
        long long arrangements = factorial(guests) / factorial(guests - chairs);
        cout << "Number of possible arrangements: " << arrangements << endl;
    }

    return 0;
}

