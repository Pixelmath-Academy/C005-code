#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void print_menu(int x, int y){
cout << "This is the add program of "<< x << " "<< y<< endl;
}

int main(){
    int x, y;
    cin >> x >> y;
    print_menu(x , y);
    cout << "Sum: " << add(x, y) << endl;
    return 0;
}