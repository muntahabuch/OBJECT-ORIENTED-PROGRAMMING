#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    
    Rectangle(float l) {
        length = l;
        width = l;   
    }

    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    
    Rectangle r1(10, 5);

   
    Rectangle r2(6);

    cout << "Rectangle:" << endl;
    cout << "Area = " << r1.area() << endl;
    cout << "Perimeter = " << r1.perimeter() << endl;

    cout << "\nSquare:" << endl;
    cout << "Area = " << r2.area() << endl;
    cout << "Perimeter = " << r2.perimeter() << endl;

    return 0;
}

