#include <iostream>
using namespace std;

class Interest {
    float principal, rate, time;

public:
   
    Interest(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }

    
    float calculateSI() {
        return (principal * rate * time) / 100;
    }
};

int main() {
    
    Interest obj(1000, 5, 2);

 
    cout << "Simple Interest = " << obj.calculateSI();

    return 0;
}

