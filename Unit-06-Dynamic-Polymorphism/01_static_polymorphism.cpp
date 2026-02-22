#include <iostream>
using namespace std;

// static polymorphism; compile-time binding

class Print {
public:
    void show(int x) {
        cout << "Integer value: " << x << endl;
    }

    void show(double x) {
        cout << "Double value: " << x << endl;
    }
};

int main() {
    Print p;

    p.show(10);
    p.show(5.75);

    return 0;
}