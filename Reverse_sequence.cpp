#include<iostream>
using namespace std;


int main() {
    int number;

    cout << "Enter a Positive Integer: ";
    cin >> number;

    while (number <= 0) {
        cout << "Please enter a positive integer greater than 1: ";
        cin >> number;
    }

    int series = number;
    int steps = 0;

    
    while (series != 1) {
        steps++;
        if (series % 2 == 0) {
            series /= 2;
        } else {
            series = series * 3 + 1;
        }
    }

    cout << endl << "Sequence in reverse order: ";

    int i = steps; 
    while (i >= 0) {
        int reverse = number; 
        int currentStep = 0; 

    
        while (currentStep < i) {
            if (reverse % 2 == 0) {
                reverse /= 2;
            } else {
                reverse = reverse * 3 + 1;
            }
            currentStep++;
        }

        cout << reverse << " "; 
        i--; 
    }

    cout << endl;
    return 0;
    
		
}
	
