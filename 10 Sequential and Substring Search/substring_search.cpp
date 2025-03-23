#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);

    size_t pos = text.find(pattern);
    if (pos != string::npos)
        cout << "Found at index " << pos << endl;
    else
        cout << "Not found" << endl;

    return 0;
}