#include <iostream>
using namespace std;

void show(int num) {
    cout << "Integer: " << num << endl;
}

void show(double num) {
    cout << "Double: " << num << endl;
}

int main() {
    show(5);      // Calls the int version
    show(5.5);    // Calls the double version

    return 0;
}
