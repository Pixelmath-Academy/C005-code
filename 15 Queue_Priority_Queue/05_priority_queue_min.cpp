
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    //priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int x: {5,1,8,3,7}) pq.push(x);

    cout << "elements in increasing order: ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";
    return 0;
}
