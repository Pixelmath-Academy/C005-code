#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    //int numbers[5] = {10, 20 ,30, 40 ,50};
    
    cout << "Vector elements: ";
    for(auto num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << numbers[0]; //front()
    cout << numbers[numbers.size() - 1]; //back()
    
    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;
    cout << "Size: " << numbers.size() << endl;
    
    return 0;
}

//int arr[5];