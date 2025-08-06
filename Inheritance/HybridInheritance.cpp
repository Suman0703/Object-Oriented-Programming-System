#include <iostream>
using namespace std;

// Single Inheritance
class A
{
public:
    void showA()
    {
        cout << "This is class A" << endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "This is class B" << endl;
    }
};

// Multilevel Inheritance
class C : public B
{
public:
    void showC()
    {
        cout << "This is class C" << endl;
    }
};

// Hierarchical Inheritance
class D : public A
{
public:
    void showD()
    {
        cout << "This is class D " << endl;
    }
};

// Multiple Inheritance
class E
{
public:
    void showE()
    {
        cout << "This is class E" << endl;
    }
};

class F : public A, public E
{
public:
    void showF()
    {
        cout << "This is class F" << endl;
    }
};

// 5. Hybrid Inheritance
class G : public B, public D
{
public:
    void showG()
    {
        cout << "This is class G" << endl;
    }
};

int main()
{
    cout << "Single Inheritance" << endl;
    B objB;
    objB.showA(); 
    objB.showB(); 
    
    cout << " Multilevel Inheritance" << endl;
    C objC;
    objC.showA(); 
    objC.showB(); 
    objC.showC(); 

    cout << "Hierarchical Inheritance" << endl;
    D objD;
    objD.showA(); 
    objD.showD(); 

    cout << "Multiple Inheritance" << endl;
    F objF;
    objF.showA(); 
    objF.showE(); 
    objF.showF(); 

    cout << "Hybrid Inheritance" << endl;
    G objG;
    objG.B::showA(); 
    objG.D::showA(); 
    objG.showB();    
    objG.showD();    
    objG.showG();    

    return 0;
}
