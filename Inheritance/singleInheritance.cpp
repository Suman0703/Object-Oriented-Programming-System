#include <iostream>
using namespace std;

// Base class
class A {
protected:
int a;
public:
    void show() {
        cout << "Enter value of A." << endl;
        cin>>a;
    }
};

// Derived class
class B : public A {
public:
    void display() {
        cout << a << endl;
    }
};

int main() {
    B obj;
    obj.show();  // Inherited from class A
    obj.display();  // Defined in class B

    return 0;
}
