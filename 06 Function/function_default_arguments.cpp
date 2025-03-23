#include <iostream>
using namespace std;

int multiply(int a, int b = 2) {
    return a * b;
}

int main(){
    int x;
    cin >> x;
    cout << "Multiply with default: " << multiply(x) << endl;
    cout << "Multiply with custom: " << multiply(x, 3) << endl;
    return 0;
}