#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    stack<int> ans;
    int size = 0;
    for(int i=1; i<10; i+=2) s.push(i);
    while(!s.empty()){
        int t = s.top();
        s.pop();
        ans.push(t);
    }
    while(!ans.empty()){
        cout << ans.top()<< " ";
        ans.pop();
    }
    return 0;
}