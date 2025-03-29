#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> fruits;
    
    fruits.push_back("Apple");
    fruits.push_back("Banana");
    fruits.push_back("Orange");
    
    cout << "Current fruits: ";
    for(string fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;
    
    fruits.pop_back();
    fruits.insert(fruits.begin() + 1, "Mango");
    
    cout << "After changes: ";
    for(string fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;
    
    return 0;
}