#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> prices(5);
    
    vector<string> name(5, "dew");
    for(auto d : name) cout << d << " ";
    cout << endl;
    
    
    string arr[5];
    for(int i=0; i<4; i++) arr[i] = "dew";
    
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