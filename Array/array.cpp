#include <iostream>
using namespace std;

int main() {
    // Declare an array of 5 integers
    int numbers[5];

    // Taking input from the user
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Displaying the elements
    cout << "You entered:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}