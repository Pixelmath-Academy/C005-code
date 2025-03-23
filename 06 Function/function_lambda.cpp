#include <iostream>
using namespace std;

int main(){
    auto add = [](int a, int b) -> int {
        return a + b;
    };
    int x, y;
    cin >> x >> y;
    cout << "Lambda add: " << add(x, y) << endl;
    return 0;
}