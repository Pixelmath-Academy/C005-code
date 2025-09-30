
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    multimap<string,int> mm;
    mm.insert({"a",1});
    mm.insert({"a",2});
    mm.insert({"b",3});

    auto range = mm.equal_range("a");
    cout << "values for key 'a': ";
    for(auto it=range.first; it!=range.second; ++it) cout << it->second << " ";
    cout << "\n";
    return 0;
}
