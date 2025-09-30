
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    priority_queue<int> pq; //max heap
    for(int x: {5,1,8,3,7}) pq.push(x);

    cout << "elements in decreasing order: ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";
    return 0;
}
