
#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(5); // duplicate ignored

    cout << "size=" << s.size() << "\n";
    for(int x: s) cout << x << " ";
    cout << "\n";

    if(s.find(2) != s.end()) cout << "2 found\n";
    s.erase(5);
    cout << "after erase: ";
    for(int x: s) cout << x << " ";
    cout << "\n";
    return 0;
}
