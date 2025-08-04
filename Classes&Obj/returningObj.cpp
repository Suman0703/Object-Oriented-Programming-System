#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void set(string n)
    {
        name = n;
    }

    void display()
    {
        cout << "Student Name: " << name << endl;
    }
};

// Function that returns a Student object
Student create()
{
    Student s;
    s.set("Suman");
    return s;
}

int main()
{
    Student s1;

    s1 = create();

    s1.display();

    return 0;
}
