#include <iostream>
using namespace std;

int main() {
    int a = 5;
    double b = 2.5;
    double result = a + b;
    cout << "a + b = " << result << endl;
    cout << "Explicit cast: " << (int)b << endl;
    return 0;
}