#include <iostream>
using namespace std;

class Employee {
protected:
    int empId;
    string name;
    float basicSalary;

public:
    void getEmployeeData() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void displayEmployeeData() {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

class Salary : public Employee {
private:
    float hra, da, pf, netSalary;
	id calculateSalary() {
        hra = basicSalary * 0.20;     // 20% HRA
        da  = basicSalary * 0.10;     // 10% DA
        pf  = basicSalary * 0.05;     // 5% PF deduction
        netSalary = basicSalary + hra + da - pf;
    }

    void displaySalarySlip() {
        cout << "\n------- Salary Slip -------\n";
        displayEmployeeData();
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "PF Deduction: " << pf << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Salary s;
    s.getEmployeeData();
    s.calculateSalary();
    s.displaySalarySlip();

    return 0;
}
