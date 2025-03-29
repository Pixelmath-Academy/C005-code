#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> prices(5);
    
    for(int i = 0; i < prices.size(); i++) {
        prices[i] = (i + 1) * 10.5;
    }
    
    cout << "Prices: ";
    for(double price : prices) {
        cout << price << " ";
    }
    cout << endl;
    
    prices.at(2) = 99.99;
    prices[3] = 88.88;
    
    cout << "Updated prices: ";
    for(double price : prices) {
        cout << price << " ";
    }
    cout << endl;
    
    return 0;
}