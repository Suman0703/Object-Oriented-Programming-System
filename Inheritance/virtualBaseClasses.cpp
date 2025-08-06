#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "This is class A" << endl;
    }
};

//virtual inheritance
class B : virtual public A {
public:
    void showB() {
        cout << "This is class B" << endl;
    }
};

class C : virtual public A {
public:
    void showC() {
        cout << "This is class C" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    cout << "Virtual Base Class" << endl;

    D obj;
    obj.showA(); 
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}
