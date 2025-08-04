#include <iostream>
using namespace std;

int num = 10;  // Global variable

int main() {
    int num = 5;  // Local variable

    cout << "Local num: " << num << endl;
    cout << "Global num: " << ::num << endl;  // Using scope resolution to access global variable

    return 0;
}
