#include <iostream>
using namespace std;

void increment(int &n) {
    n++;
    cout << "Inside function: " << n << endl;
}

int main(){
    int num;
    cin >> num;
    increment(num);
    cout << "Outside function: " << num << endl;
    return 0;
}