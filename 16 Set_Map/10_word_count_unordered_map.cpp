
#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string text = "the quick brown fox jumps over the lazy dog the fox";
    unordered_map<string,int> freq;
    istringstream in(text);
    string w;
    while(in >> w) freq[w]++;

    for(auto &kv : freq) cout << kv.first << ":" << kv.second << "\n";
    return 0;
}
