#include <iostream>
using namespace std;

int main() {
    int num = 10;           // A normal integer variable
    int* ptr = &num;        // Pointer storing the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in ptr (address): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // Changing value using pointer
    *ptr = 20;
    cout << "New value of num after using pointer: " << num << endl;

    return 0;
}
