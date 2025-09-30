
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    for(int i=1;i<=5;i++) q.push(i); 
    
    cout << "size=" << q.size() << " front=" << q.front() << " back=" << q.back() << "\n";

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
    return 0;
}
