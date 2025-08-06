#include <iostream>
using namespace std;

//Polymorphism allows one function or method to behave differently based on the object calling it.
class A {
public:
    void show() {
        cout << "No parameters"<<endl;
    }

    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(double y) {
        cout << "Double: " << y << endl;
    }
};

int main() {
    A obj;
    obj.show();
    obj.show(10);
    obj.show(5.5);
    return 0;
}
