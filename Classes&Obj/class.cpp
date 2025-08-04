#include <iostream>
using namespace std;

// Define a class
class Person
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person p;
    p.name = "Suman";
    p.age = 20;

    p.display();

    return 0;
}
