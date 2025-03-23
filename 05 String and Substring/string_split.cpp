#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string str, word;
    getline(cin, str);
    stringstream ss(str);
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }
    for (const auto& w : words) {
        cout << w << endl;
    }
    return 0;
}