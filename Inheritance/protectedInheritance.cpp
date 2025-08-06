#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void show()
    {
        cout << "Enter value of A: ";
        cin >> a;
    }
};

class B : protected A
{
public:
    void input()
    {
        show();
    }

    void display()
    {
        cout << "Value of A is: " << a << endl;
    }
};

int main()
{
    B obj;
    obj.input();
    obj.display();
    return 0;
}
