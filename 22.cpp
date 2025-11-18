#include <iostream>
using namespace std;

class Temperature {
    float celsius;

public:
    
    Temperature(float c) {
        celsius = c;
    }

    float toFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;
    }

    void display() {
        cout << "Celsius: " << celsius << endl;
        cout << "Fahrenheit: " << toFahrenheit() << endl;
    }
};

int main() {
   
    Temperature t(25);

    t.display();

    return 0;
}

