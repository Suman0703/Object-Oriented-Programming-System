#include <iostream>
using namespace std;

class A {
public:
    virtual void show() = 0; 

    virtual ~A() { 
        cout << "Destructor of A" << endl;
    }
};

class B : public A {
public:
    void show() override {
        cout << "Class B" << endl;
    }

    ~B() override { 
        cout << "Destructor of B" << endl;
    }
};

int main() {
    A* ptr = new B();
    ptr->show();
    delete ptr; 
    return 0;
}
