//An inline function is a function where the compiler replaces the function call with the actual code of the function to reduce execution time for small, frequently used functions.
#include <iostream>
using namespace std;

// Inline function to calculate square
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 4;
    cout << "Square of " << num << " is: " << square(num) << endl;
    return 0;
}
