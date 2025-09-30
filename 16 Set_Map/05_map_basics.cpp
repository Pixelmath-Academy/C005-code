
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string,int> mp; //[apple, 3]
    mp["apple"] = 3;
    mp["banana"] = 200;
    mp["banana"] = 5; //[banana , 5]
    mp["cherry"] = 10;
    //if key existed, there is no change
    mp.insert({"cherry",7}); //[cherry, 7]

    cout << "apple count=" << mp["apple"] << "\n";

    for(auto &kv : mp) cout << kv.first << ":" << kv.second << "\n";

    mp.erase("banana");
    cout << "after erase: ";
    for(auto &kv : mp) cout << kv.first << " ";
    cout << "\n";
    return 0;
}
