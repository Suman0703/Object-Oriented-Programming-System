#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b) {
    return a + b;  // Return the sum
}

int main() {
    int num1 = 5, num2 = 7;

    // Function call
    int result = add(num1, num2);

    cout << "Sum is: " << result << endl;

    return 0;
}
