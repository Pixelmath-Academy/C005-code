
#include <iostream>
#include <set>
using namespace std;

struct Desc {
    bool operator()(int a, int b) const { return a > b; }
};

int main(){
    set<int, Desc> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(int x: s) cout << x << " ";
    cout << "\n"; // prints descending order
    return 0;
}
