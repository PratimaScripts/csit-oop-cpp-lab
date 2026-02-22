#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
        cout << "Calculating Employee Salary" << endl;
    }
};

class Manager : public Employee {
public:
    void calculateSalary() {
        cout << "Salary = Base + Bonus" << endl;
    }
};

class Developer : public Employee {
public:
    void calculateSalary() {
        cout << "Salary = Base + Overtime" << endl;
    }
};

int main() {
    Employee* e;

    Manager m;
    Developer d;

    e = &m;
    e->calculateSalary();

    e = &d;
    e->calculateSalary();

    return 0;
}