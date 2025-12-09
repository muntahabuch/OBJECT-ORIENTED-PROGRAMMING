#include <iostream>
using namespace std;


class Employee {
public:
    virtual float calculateSalary() {
        return 0;
    }
};


class FullTimeEmployee : public Employee {
    float basic, hra, da;
public:
    FullTimeEmployee(float b, float h, float d) {
        basic = b;
        hra = h;
        da = d;
    }
    float calculateSalary() {
        return basic + hra + da;
    }
};


class PartTimeEmployee : public Employee {
    int hours;
    float rate;
public:
    PartTimeEmployee(int h, float r) {
        hours = h;
        rate = r;
    }
    float calculateSalary() {
        return hours * rate;
    }
};


class Intern : public Employee {
    float stipend;
public:
    Intern(float s) {
        stipend = s;
    }
    float calculateSalary() {
        return stipend;
    }
};

int main() {
    Employee* emp;

    int choice;
    cout << "1. Full Time Employee\n";
    cout << "2. Part Time Employee\n";
    cout << "3. Intern\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        float b, h, d;
        cout << "Enter Basic, HRA, DA: ";
        cin >> b >> h >> d;
        emp = new FullTimeEmployee(b, h, d);
    }
    else if (choice == 2) {
        int hrs;
        float rate;
        cout << "Enter Hours and Rate: ";
        cin >> hrs >> rate;
        emp = new PartTimeEmployee(hrs, rate);
    }
    else if (choice == 3) {
        float st;
        cout << "Enter Stipend: ";
        cin >> st;
        emp = new Intern(st);
    }
    else {
        cout << "Invalid choice.";
        return 0;
    }

    cout << "Salary = " << emp->calculateSalary();

    return 0;
}
