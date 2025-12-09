#include <iostream>
#include <cmath>
using namespace std;


class BankAccount {
public:
    virtual float interest() {
        return 0;
    }
};


class SavingsAccount : public BankAccount {
    float principal, rate, time;
public:
    SavingsAccount(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }
    float interest() {
        return (principal * rate * time) / 100;
    }
};


class FixedDeposit : public BankAccount {
    float principal, rate, time;
public:
    FixedDeposit(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }
    float interest() {
        float amount = principal * pow((1 + rate / 100), time);
        return amount - principal;
    }
};


class RecurringDeposit : public BankAccount {
    float monthlyAmount, rate, months;
public:
    RecurringDeposit(float m, float r, float n) {
        monthlyAmount = m;
        rate = r;
        months = n;
    }
    float interest() {
        return (monthlyAmount * months * (months + 1) * rate) / (2400);
    }
};

int main() {
    BankAccount* acc;
    int choice;

    cout << "1. Savings Account\n";
    cout << "2. Fixed Deposit\n";
    cout << "3. Recurring Deposit\n";
    cout << "Choose account type: ";
    cin >> choice;

    if (choice == 1) {
        float p, r, t;
        cout << "Enter Principal, Rate, Time: ";
        cin >> p >> r >> t;
        acc = new SavingsAccount(p, r, t);
    }
    else if (choice == 2) {
        float p, r, t;
        cout << "Enter Principal, Rate, Time: ";
        cin >> p >> r >> t;
        acc = new FixedDeposit(p, r, t);
    }
    else if (choice == 3) {
        float m, r, n;
        cout << "Enter Monthly Amount, Rate, Months: ";
        cin >> m >> r >> n;
        acc = new RecurringDeposit(m, r, n);
    }
    else {
        cout << "Invalid choice";
        return 0;
    }

    cout << "Interest Earned = " << acc->interest();
    return 0;
}
