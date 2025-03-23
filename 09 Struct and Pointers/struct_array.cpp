#include <iostream>
using namespace std;

struct Student {
    string name; //attributes
    int age;
    bool gd; //เรียนจบ
}; 

int main() {
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].age >> arr[i].gd;
    }
    for (int i = 0; i < n; i++) {
        if(arr[i].gd == true) cout << arr[i].name << " (" << arr[i].age << ")" << endl;
    }
    return 0;
}