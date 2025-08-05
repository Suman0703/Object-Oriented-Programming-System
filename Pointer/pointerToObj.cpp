#include <iostream>
using namespace std;

class Class {
public:
    int a;

    void setA(int x) {
        a = x;
    }

    void display() {
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    Class obj;
    Class* ptr = &obj;  // Pointer to object

    ptr->setA(100);     // Using arrow operator to call method
    ptr->display();     // Accessing member through pointer

    return 0;
}
