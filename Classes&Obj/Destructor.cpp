#include <iostream>
using namespace std;

class Class
{
public:
    Class()
    {
        cout << "Constructor called" << endl;
    }

    ~Class()
    {
        cout << "Destructor called" << endl;
    }

    void display()
    {
        cout << "Hello from Class!" << endl;
    }
};

int main()
{
    Class obj;
    obj.display();

    return 0;
}
