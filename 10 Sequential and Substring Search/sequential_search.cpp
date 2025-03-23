//sequential search , linear search

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << "Not found" << endl;

    return 0;
}

// 1 2 3 77 88 6 56