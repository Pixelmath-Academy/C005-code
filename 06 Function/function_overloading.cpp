#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

//double add(double a, double b) {
    //return a + b;
//}

int main(){
    int x, y;
    double p, q;
    cin >> x >> y >> p >> q;
    cout << "Int add: " << add(x, y) << endl;
    cout << "Double add: " << add(p, q) << endl;
    return 0;
}