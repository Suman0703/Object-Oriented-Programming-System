#include <iostream>
using namespace std;

class A {
private:
    int a;

public:
    A(int x) {
        a = x;
    }

    // Granting access to class B
    friend class B;

    void showA() {
        cout << "Value in class A: " << a << endl;
    }
};

// Class B can access private members of class A
class B {
public:
    void showB(A obj) {
        cout << obj.a << endl;
        cout << "This is class B" << endl;
    }
};

int main() {
    cout << "Granting Access Using Friend Class" << endl;

    A objA(100);
    B objB;

    objA.showA();     
    objB.showB(objA); 

    return 0;
}
