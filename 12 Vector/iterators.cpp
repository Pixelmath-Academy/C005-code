#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {5, 2, 8, 3, 1};
    
    cout << "Original order: ";
    for(auto it = nums.begin(); it != nums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Reverse order: ";
    for(auto it = nums.rbegin(); it != nums.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}