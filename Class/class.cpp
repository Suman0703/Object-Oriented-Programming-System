#include <iostream>
using namespace std;

// Define a class
class Person {
public:
    string name;
    int age;

    // Method to display details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p;            // Create object
    p.name = "Suman";
    p.age = 20;

    p.display();         // Call method

    return 0;
}
