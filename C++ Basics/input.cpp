#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    // Taking input using cin (no spaces in name)
    cout << "Enter your name: ";
    cin >> name;  // This will only take first word (e.g., "Suman" from "Suman Devi")

    cout << "Enter your age: ";
    cin >> age;

    // Displaying the result
    cout << "Name:" << name <<endl; 
    cout << "age: " << age << " years old." << endl;

    return 0;
}
