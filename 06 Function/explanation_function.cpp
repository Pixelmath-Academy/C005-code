#include <iostream>
using namespace std;

int add(int &x, int &y){
    x++;
    return x + y;
}

int main(){
    int a = 3, b=5;
    cout << add(a, b)<< endl;
    cout << a;
    return 0;
}