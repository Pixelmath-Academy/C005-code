#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, sub;
    cin >> str >> sub;
    size_t pos = str.find(sub);
    if (pos != string::npos) cout << "Found at: " << pos << endl;
    else cout << "Not found" << endl;
    return 0;
}