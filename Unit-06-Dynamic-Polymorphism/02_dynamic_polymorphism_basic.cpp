#include <iostream>
using namespace std;

// virtual functions and late binding

class Base {
public:
    virtual void display() {
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Base* b;
    Derived d;

    b = &d;
    b->display();   // Runtime binding

    return 0;
}