#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[] = {2 ,5 ,3 ,8 ,4 ,1 ,9};
    int n = sizeof(a)/ sizeof(a[0]);
    sort(a, a+n);
    for(auto ele : a) cout << ele << " ";
    return 0;
}