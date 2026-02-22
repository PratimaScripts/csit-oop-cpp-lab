#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;   // Pure virtual → Abstract class
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}