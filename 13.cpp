#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    float a=1.0e20f, b=3.0f, c=1.0e20f;
    cout << "Float (a*b)/c: " << (a*b)/c << ", (a/c)*b: " << (a/c)*b << endl;

    double da=1.0e20, db=3.0, dc=1.0e20;
    cout << "Double (a*b)/c: " << (da*db)/dc << ", (a/c)*b: " << (da/dc)*db << endl;

    // Find epsilon
    float feps = 1.0f;
    while(1.0f + feps/2.0f != 1.0f) feps /= 2.0f;
    double deps = 1.0;
    while(1.0 + deps/2.0 != 1.0) deps /= 2.0;

    cout << "Float epsilon: " << feps << ", Double epsilon: " << deps << endl;
}

