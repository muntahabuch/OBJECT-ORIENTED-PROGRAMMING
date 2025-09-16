#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int temps[] = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67,
                   65, 78, 82, 88, 91, 92, 90, 93, 87, 80,
                   78, 79, 72, 68, 61, 59};
    int n = sizeof(temps) / sizeof(temps[0]);

    int hot = 0, pleasant = 0, cold = 0;
    int sum = 0;

    cout << "Temperature Categories:\n";
    for (int i = 0; i < n; i++) {
        sum += temps[i];  

        if (temps[i] >= 85) {
            cout << temps[i] << " -> Hot" << endl;
            hot++;
        } else if (temps[i] >= 60 && temps[i] <= 84) {
            cout << temps[i] << " -> Pleasant" << endl;
            pleasant++;
        } else {
            cout << temps[i] << " -> Cold" << endl;
            cold++;
        }
    }

    
    double average = static_cast<double>(sum) / n;

    cout << "\nSummary:\n";
    cout << "Hot days: " << hot << endl;
    cout << "Pleasant days: " << pleasant << endl;
    cout << "Cold days: " << cold << endl;
    cout << fixed << setprecision(2);
    cout << "Average temperature: " << average << endl;

    return 0;
}

