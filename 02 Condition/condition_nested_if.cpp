#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > 0) {
        if (b > 0)
            cout << "Both positive" << endl;
        else
            cout << "a positive, b not" << endl;
    } else {
        cout << "a not positive" << endl;
    }
    return 0;
}