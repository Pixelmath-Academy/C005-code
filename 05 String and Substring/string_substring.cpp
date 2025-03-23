#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int start, len;
    cin >> str >> start >> len;
    cout << str.substr(start, len) << endl;
    return 0;
}