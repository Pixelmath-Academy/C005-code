#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern); //subtring

    int t_len = text.length();
    int p_len = pattern.length();
    bool found = false;

    for (int i = 0; i <= t_len - p_len; i++) {
        bool match = true;
        for (int j = 0; j < p_len; j++) {
            if (text[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
