
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<string> us;
    us.insert("apple");
    us.insert("banana");
    us.insert("cherry");

    cout << "contains banana? " << (us.count("banana") ? "yes" : "no") << "\n";

    for(const auto& x: us) cout << x << " ";
    cout << "\n";
    return 0;
}
