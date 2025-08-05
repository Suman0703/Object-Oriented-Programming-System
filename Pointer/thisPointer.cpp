#include <iostream>
using namespace std;

class Class {
private:
    int a, b;

public:
    void set(int a, int b) {
        this->a = a;  
        this->b = b;  
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Class obj;
    obj.set(10, 20);
    obj.display();

    return 0;
}
