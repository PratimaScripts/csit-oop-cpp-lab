#include <iostream>
using namespace std;

int main() {
    int *p = new int;  // allocate memory on heap

    *p = 50;           // store value in that memory

    cout << *p << endl;

    delete p;          // free the memory

    return 0;
}