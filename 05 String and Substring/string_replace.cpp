#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, old_sub, new_sub;
    cin >> str >> old_sub >> new_sub;
    size_t pos = str.find(old_sub);
    if (pos != string::npos) {
        str.replace(pos, old_sub.length(), new_sub);
    }
    cout << str << endl;
    return 0;
}