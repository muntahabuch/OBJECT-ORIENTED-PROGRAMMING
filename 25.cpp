#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentData() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudentData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Marks : public Student {
private:
    float m1, m2, m3;
    float total, percentage;

public:
    void getMarks() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        percentage = (total / 300) * 100;
    }

    void displayReport() {
        cout << "\n----- Academic Report -----\n";
        displayStudentData();
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Marks m;
    m.getStudentData();
    m.getMarks();
    m.calculate();
    m.displayReport();

    return 0;
}
