
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string,int> um;
    um["red"] = 1;
    um["green"] = 2;
    um["blue"] = 3;

    for(auto &kv : um) cout << kv.first << ":" << kv.second << " ";
    cout << "\n";

    if(um.find("green") != um.end()) cout << "found green\n";
    return 0;
}
