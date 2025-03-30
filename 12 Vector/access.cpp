#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> letters = {'a', 'b', 'c'};
    
    if(!letters.empty()) {
        cout << "Vector is not empty" << endl;
    }
    
    letters.clear();
    
    if(letters.empty()) {
        cout << "Vector is now empty" << endl;
    }
    
    letters = {'x', 'y', 'z'};
    
    letters.erase(letters.begin() + 1); //
    
    cout << "After erase: ";
    for(char c : letters) {
        cout << c << " ";
    }
    cout << endl;
    
    return 0;
}