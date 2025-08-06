#include <iostream>
using namespace std;

// First base class
class A {
protected:
    int a;
public:
    void setA() {
        cout << "Enter value of A: ";
        cin >> a;
    }
};

// Second base class
class B {
protected:
    int b;
public:
    void setB() {
        cout << "Enter value of B: ";
        cin >> b;
    }
};

// Derived class from both A and B
class C : public A, public B {
public:
    void display() {
        cout << "Value of A: " << a << endl;
        cout << "Value of B: " << b << endl;
        cout << "Sum = " << a + b << endl;
    }
};

int main() {
    C obj;
    obj.setA();
    obj.setB();    
    obj.display();  

    return 0;
}
