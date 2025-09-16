#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    int id;
    double wage, hours, gross, net, totalPayroll = 0;

    cout << fixed << setprecision(2);

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter data for employee " << i << ":\n";
        cout << "ID number: ";
        cin >> id;
        cout << "Hourly wage rate: ";
        cin >> wage;
        cout << "Hours worked: ";
        cin >> hours;

        
        if (hours <= 40) {
            gross = wage * hours;
        } else {
            gross = (wage * 40) + ((hours - 40) * wage * 1.5);
        }

        
        net = gross - (gross * 0.03625);

        cout << "Employee " << id << " net pay: $" << net << endl;

        totalPayroll += net;
    }

    double averagePay = totalPayroll / n;

    cout << "\n========== Payroll Summary ==========\n";
    cout << "Total payroll: $" << totalPayroll << endl;
    cout << "Average pay: $" << averagePay << endl;

    return 0;
}

