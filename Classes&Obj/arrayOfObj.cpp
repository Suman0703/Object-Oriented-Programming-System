#include <iostream>
using namespace std;

class Class {
public:
    int x;

    void setValue(int val) {
        x = val;
    }

    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    // Array of 3 objects
    Class obj[3]; 

    obj[0].setValue(10);
    obj[1].setValue(20);
    obj[2].setValue(30);

    for (int i = 0; i < 3; i++) {
        obj[i].display();
    }

    return 0;
}
