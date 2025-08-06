#include <iostream>
using namespace std;

class A {
public:
    // Pure virtual function
    virtual void show() = 0; 
};

class B : public A {
public:
    void show() override {
        cout << "Class B" << endl;
    }
};

int main() {
    A* ptr;
    B obj;
    ptr = &obj;
    ptr->show();
    return 0;
}
