#include <iostream>
using namespace std;

// Base class
class A
{
public:
    void show()
    {
        cout << "This is class A" << endl;
    }
};

// Derived from A
class B : public A
{
public:
    void display()
    {
        cout << "This is class B" << endl;
    }
};

// Derived from B
class C : public B
{
public:
    void print()
    {
        cout << "This is class C" << endl;
    }
};

int main()
{
    C obj;
    obj.print();
    obj.B::display();
    obj.A::show();

    return 0;
}
