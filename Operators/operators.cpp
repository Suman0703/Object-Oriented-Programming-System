#include <iostream>
using namespace std;

int main() {
    //Arithmetic Operators
    int a = 10, b = 3;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;
    //Relational Operators
    int x = 5, y = 10;
    cout << (x == y) << endl; // 0 (false)
    cout << (x != y) << endl; // 1 (true)
    //logical operators
    bool c = true, d = false;
    cout << (c && d) << endl; // 0
    cout << (c || d) << endl; // 1
    cout << (!c) << endl;     // 0
    //Increment and Decrement Operators
    int r = 9;
    cout << r++ << endl; 
    cout << ++r << endl;
    cout << r--<< endl; 
    cout << --r << endl;
    //Ternary Operator
    int age = 18;
    string result = (age >= 18) ? "Adult" : "Minor";
    cout << result << endl;
    return 0;
}