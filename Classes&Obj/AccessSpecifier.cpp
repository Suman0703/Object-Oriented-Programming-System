#include <iostream>
using namespace std;

class Ex
{
private:
    int a; //accessible only within the class

protected:
    int b; //accessible in this class and derived classes

public:
    int c; //accessible from anywhere

    void setValues()
    {
        a = 10;
        b = 20;
        c = 30;
    }

    void display()
    {
        cout << "a (private): " << a << endl;
        cout << "b (protected): " << b << endl;
        cout << "c (public): " << c << endl;
    }
};

int main()
{
    Ex obj;
    obj.setValues();
    obj.display();
    obj.c = 25;

    cout << "Updated c (public): " << obj.c << endl;

    return 0;
}
