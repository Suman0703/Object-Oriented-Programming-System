#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    A(int x)
    {
        a = x;
        cout << "Constructor of class A called with value: " << a << endl;
    }
    void showA()
    {
        cout << "Value in A: " << a << endl;
    }
};

class B : public A
{
    int b;

public:
    B(int x, int y) : A(x)
    {
        b = y;
        cout << "Constructor of class B called with value: " << b << endl;
    }
    void showB()
    {
        cout << "Value in B: " << b << endl;
    }
};

int main()
{
    cout << "Passing parameters to base class constructor" << endl;
    B obj(3, 6);
    obj.showA();
    obj.showB();

    return 0;
}
