
#include <iostream>
#include <set>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(5);
    ms.insert(2);
    ms.insert(5);
    ms.insert(3);
    ms.insert(5);

    cout << "count of 5=" << ms.count(5) << "\n";

    for(int x: ms) cout << x << " ";
    cout << "\n";

    auto it = ms.find(5);
    //iterator it = ms.find(5);
    if(it != ms.end()) ms.erase(it); // erase one occurrence

    cout << "after erase one 5: ";
    for(int x: ms) cout << x << " ";
    cout << "\n";
    return 0;
}
