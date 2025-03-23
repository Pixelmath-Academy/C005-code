#include <iostream>
using namespace std;

int main() {
    int x = 12;
    int* p = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer p points to: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;
    return 0;
}