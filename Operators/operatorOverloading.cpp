#include <iostream>
using namespace std;

class Number {
public:
    int x;

    Number(int val = 0) {
        x = val;
    }

    // Unary operator 
    void operator - () {
        x = -x;
    }

    // Binary operator 
    Number operator + (Number obj) {
        Number temp;
        temp.x = this->x + obj.x;
        return temp;
    }

    void display() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Number a(10), b(20), c;

    c = a + b;  
    cout << "Result of a + b: ";
    c.display();

    -a;  
    cout << "After applying unary - to a: ";
    a.display();

    return 0;
}
