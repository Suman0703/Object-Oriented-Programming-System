#include <iostream>
using namespace std;

class Class {
private:
    int number;

public:
    Class(int n) {
        number = n;
    }

    // Friend function declared inside the class
    friend void showNumber(Class obj);
};

// Friend function defined outside the class
void showNumber(Class obj) {
    // Accessing private member
    cout << "Number is: " << obj.number << endl;
}

int main() {
    Class obj(100);
    showNumber(obj);

    return 0;
}
