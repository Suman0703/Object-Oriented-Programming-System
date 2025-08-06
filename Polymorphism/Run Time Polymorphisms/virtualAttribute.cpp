#include <iostream>
using namespace std;

class A {
public:
    virtual void show() { 
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void show() override {
        cout << "Class B" << endl;
    }
};

class C : public B {
public:
    void show() override { 
        cout << "Class C" << endl;
    }
};

int main() {
    A* ptr;
    C obj;
    ptr = &obj;
    ptr->show(); 
    return 0;
}
