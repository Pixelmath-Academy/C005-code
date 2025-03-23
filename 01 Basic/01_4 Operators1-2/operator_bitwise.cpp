#include <iostream>
using namespace std;

int main() {
    int a = 5;    // 0101
    int b = 3;    // 0011

    cout << "a & b = " << (a & b) << endl;   // 0001 = 1
    cout << "a | b = " << (a | b) << endl;   // 0111 = 7
    cout << "a ^ b = " << (a ^ b) << endl;   // 0110 = 6
    cout << "~a = " << (~a) << endl;         // Invert bits of a
    cout << "a << 1 = " << (a << 1) << endl; // Shift left
    cout << "a >> 1 = " << (a >> 1) << endl; // Shift right
    return 0;
}