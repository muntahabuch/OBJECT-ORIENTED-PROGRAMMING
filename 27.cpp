#include <iostream>
using namespace std;


class Shape {
public:
    virtual float area() = 0;   
};


class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    float area() {
        return 3.14159 * radius * radius;
    }
};


class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    float area() {
        return length * width;
    }
};


class Square : public Shape {
    float side;
public:
    Square(float s) {
        side = s;
    }
    float area() {
        return side * side;
    }
};

int main() {
    Shape *ptr;   
    int choice;

    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Square\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        ptr = new Circle(r);
    }
    else if (choice == 2) {
        float l, w;
        cout << "Enter length and width: ";
        cin >> l >> w;
        ptr = new Rectangle(l, w);
    }
    else if (choice == 3) {
        float s;
        cout << "Enter side: ";
        cin >> s;
        ptr = new Square(s);
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "Area = " << ptr->area();

    return 0;
}
