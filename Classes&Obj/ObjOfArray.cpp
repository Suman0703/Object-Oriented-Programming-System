#include <iostream>
using namespace std;

class Class
{
public:
    // Array inside the object
    int arr[3];
    void setValues()
    {
        for (int i = 0; i < 3; i++)
        {
            arr[i] = (i + 1) * 10;
        }
    }

    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "arr[" << i << "] = " << arr[i] << endl;
        }
    }
};

int main()
{
    Class obj;
    obj.setValues();
    obj.display();

    return 0;
}
