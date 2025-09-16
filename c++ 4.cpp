#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Number of elements must be greater than 0." << endl;
        return 1;
    }

    double number, sum = 0;
    double smallest, largest;

    cout << "Enter " << n << " numbers:" << endl;
    cin >> number;
    smallest = largest = number;
    sum += number;
    for (int i = 1; i < n; ++i) {
        cin >> number;
        sum += number;

        if (number < smallest)
            smallest = number;

        if (number > largest)
            largest = number;
    }

    // Output the results
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / n << endl;
    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

