#include <iostream>
using namespace std;

int main(){
    int ps[100];
    int n;
    cin >> n;
    ps[0] = 0;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        ps[i] = ps[i-1] + x;
    }
    int left, right;
    cin >> left >> right;
    cout << ps[right] - ps[left-1] << " ";
    cin >> left >> right;
    cout << ps[right] - ps[left-1];
    //for(int i=1; i<=n; i++) cout << ps[i] << " ";
    return 0;
}