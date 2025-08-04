#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

//Passed by VALUE (makes a copy)
void ByValue(Student s) {
    s.name = "Changed (Value)";
    cout << "Inside changeByValue: ";
    s.display();
}

//Passed by REFERENCE (affects original)
void ByReference(Student &s) {
    s.name = "Changed (Reference)";
    cout << "Inside changeByReference: ";
    s.display();
}

int main() {
    Student s1("Suman");

    cout << "Original: ";
    s1.display();

    ByValue(s1); 
    cout << "After changeByValue: ";
    s1.display();        
    ByReference(s1); 
    cout << "After changeByReference: ";
    s1.display();          

    return 0;
}
