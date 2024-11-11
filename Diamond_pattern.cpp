#include <iostream>
using namespace std;

int main() {
    int height;
    char symbol;
    char choice;

    cout << "Enter the height of the diamond (odd number): ";
    cin >> height;
    if (height % 2 == 0) {
        cout << "Please enter an odd number for the height.";
        return 0;
    }
    
    cout << "Enter a character to draw the diamond: ";
    cin >> symbol;

    cout << "Do you want a hollow diamond? (y/n): ";
    cin >> choice;
    
    height=2*height-1;


    for (int i = 1; i <= height; i++) {

        int ch = i <= (height / 2) + 1 ? (2 * i - 1) : (2 * (height - i) + 1);
        int spaces = (height - ch) / 2;

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int k = 0; k < ch; k++) {
            if (choice == 'y' && k > 0 && k < ch - 1 && i != 1 && i != height) {
                cout << " "; 
            } else {
                cout << symbol;  
            }
        }

        cout << endl;
    }

    
	return 0;
}

