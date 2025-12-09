#include <iostream>
using namespace std;


class Transport {
public:
    virtual float fare(int distance) = 0;  
};


class Bus : public Transport {
public:
    float fare(int distance) {
        return distance * 5;  
    }
};


class Train : public Transport {
public:
    float fare(int distance) {
        return distance * 3.5;  
    }
};

// Flight Fare
class Flight : public Transport {
public:
    float fare(int distance) {
        return 1500 + distance * 10;  
    }
};

int main() {
    Transport* t;
    int choice, dist;

    cout << "1. Bus\n";
    cout << "2. Train\n";
    cout << "3. Flight\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter distance in km: ";
    cin >> dist;

    if (choice == 1)
        t = new Bus();
    else if (choice == 2)
        t = new Train();
    else if (choice == 3)
        t = new Flight();
    else {
        cout << "Invalid choice";
        return 0;
    }

    cout << "Total Fare = ?" << t->fare(dist);

    return 0;
}
