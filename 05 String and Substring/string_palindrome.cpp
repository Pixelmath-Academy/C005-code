#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string rev = string(str.rbegin(), str.rend());
    if (str == rev) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}