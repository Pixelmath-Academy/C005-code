#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    priority_queue<pair<int, string>> q;
    q.push({20, "Dew"});
    q.push({60, "Prayat"});
    pair<int, string> f = q.top();
    cout << f.first << " "<< f.second;
    return 0;
}