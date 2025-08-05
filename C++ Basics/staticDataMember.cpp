#include <iostream>
using namespace std;

class Class {
public:
    static int count;  // Static data member

    Class() {
        count++; 
    }

    void display() {
        cout << "Total objects created: " << count << endl;
    }
};

// Define static member outside the class
int Class::count = 0;

int main() {
    Class x, y, z;  

    z.display(); 

    return 0;
}
