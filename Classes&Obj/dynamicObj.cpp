#include <iostream>
using namespace std;

class Class {
public:
    int x;

    void set(int val) {
        x = val;
    }

    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    // Dynamically allocated object
    Class* ptr = new Class; 

    ptr->set(100);
    ptr->display();

    // Free memory
    delete ptr; 

    return 0;
}
