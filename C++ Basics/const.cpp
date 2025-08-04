#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;  // PI is a constant and cannot be changed

    float r = 5.0;
    float area = PI * r * r;

    cout << "R: " << r << endl;
    cout << "Area of circle: " << area << endl;

    // Trying to change PI will cause a compile-time error
   return 0;
}
