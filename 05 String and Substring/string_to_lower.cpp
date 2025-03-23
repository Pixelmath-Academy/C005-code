#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    transform(str.begin()+1, str.end(), str.begin()+1, ::tolower);
    cout << str << endl;
    return 0;
}