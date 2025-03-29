#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    
    cout << "Vector elements: ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;
    cout << "Size: " << numbers.size() << endl;
    
    return 0;
}