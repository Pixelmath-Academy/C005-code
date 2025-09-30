#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    pair<string, int> people;
    queue<pair<string,int>> ticket_queue;
    ticket_queue.push({"Alice", 35});
    ticket_queue.push({"Dew", 60});
    ticket_queue.push({"Prayat", 70});
    pair<string, int> s = ticket_queue.front();
    //cout << ticket_queue.front().first << " "<< ticket_queue.front().second;
    cout << s.first << " "<< s.second;
    ticket_queue.pop();
    //cout << ticket_queue.front().first << " "<< ticket_queue.front().second;
    s = ticket_queue.front();
    cout << s.first << " "<< s.second;
    return 0;
}