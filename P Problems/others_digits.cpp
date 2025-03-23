#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << n%10<< endl;
    cout << (n/10) % 10<< endl;
    cout << (n/100) % 10<< endl;
    cout << (n/1000) % 10;
    return 0;
}