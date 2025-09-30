
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, pair<int,int>> coords;
    coords["A"] = {1,2};
    coords["B"] = {3,4};

    for(auto &kv : coords){
        cout << kv.first << " -> (" << kv.second.first << "," << kv.second.second << ")\n";
    }
    return 0;
}
