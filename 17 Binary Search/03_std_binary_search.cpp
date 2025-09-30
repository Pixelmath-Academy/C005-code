
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> a = {1,2,4,4,5,7,9};
    cout << boolalpha << binary_search(a.begin(), a.end(), 4) << "\n";
    auto it1 = lower_bound(a.begin(), a.end(), 4);
    auto it2 = upper_bound(a.begin(), a.end(), 4);
    cout << "lower_bound index=" << (it1 - a.begin()) << "\n";
    cout << "upper_bound index=" << (it2 - a.begin()) << "\n";
    auto range = equal_range(a.begin(), a.end(), 4);
    cout << "equal_range: " << (range.first-a.begin()) << "," << (range.second-a.begin()) << "\n";
    return 0;
}
