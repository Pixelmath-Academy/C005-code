
#include <iostream>
#include <stack>
#include <deque>
#include <vector>
using namespace std;

int main(){
    stack<int> a; // default uses deque<int>
    a.push(1); a.push(2); a.push(3);
    cout << "top=" << a.top() << " size=" << a.size() << "\n";
    a.pop();
    cout << "top=" << a.top() << " size=" << a.size() << "\n";

    stack<int, vector<int>> b; // custom underlying container
    b.push(10); b.push(20);
    cout << "b.top=" << b.top() << " size=" << b.size() << "\n";

    // NOTE: std::stack has no iterators; if you need traversal, use the underlying container directly.
    return 0;
}
