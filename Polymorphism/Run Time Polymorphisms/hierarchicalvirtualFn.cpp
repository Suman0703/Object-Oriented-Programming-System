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

class C : public A {
public:
    void show() override {
        cout << "Class C" << endl;
    }
};

int main() {
    A* ptr;

    B objB;
    C objC;

    ptr = &objB;
    ptr->show(); 
    ptr = &objC;
    ptr->show(); 

    return 0;
}
