#include <iostream>
using namespace std;

class Person
{
public:
    int age;

    void display()
    {
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person p1, p2;

    p1.age = 25;
    p2 = p1; // Object assignment

    p2.display();
    return 0;
}
