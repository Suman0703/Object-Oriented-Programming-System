#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "This is class A (Base class)" << endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "This is class B (Derived from A)" << endl;
    }
};

class C : public A
{
public:
    void showC()
    {
        cout << "This is class C (Derived from A)" << endl;
    }
};

int main()
{
    A objA;
    B objB;
    C objC;

    objA.showA();

    objB.showA();
    objB.showB();

    objC.showA();
    objC.showC();

    return 0;
}
