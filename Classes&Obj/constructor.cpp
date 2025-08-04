//A constructor is a special method that is automatically called when an object of a class is created.
#include <iostream>
using namespace std;

// If you can have more than one constructor in the same class. This is called constructor overloading.
class Person {
    string name;
    int age;

public:
    // 1. Default Constructor
    Person() {
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Copy Constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1;                
    p1.display();

    Person p2("Suman", 21);   
    p2.display();

    Person p3 = p2;            
    p3.display();

    return 0;
}
