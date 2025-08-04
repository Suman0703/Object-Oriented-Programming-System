#include <iostream>
using namespace std;

//Methods are functions that belongs to the class.
class Person {
public:
    //Method definition Inside the class
    void printName() {
        cout << "My name is Suman Devi" << endl;
    }
    void ptname();
};

// Method definition outside the class
void Person::ptname() {
    cout << "My name is Suman Devi" << endl;
}

int main() {
    Person p;
    p.printName();
    p.ptname();
    return 0;
}
