
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    queue<string> q;
    q.push("Alice");
    q.push("Bob");
    q.push("Charlie");

    while(!q.empty()){
        cout << "Serving: " << q.front() << "\n";
        q.pop();
    }
    return 0;
}
