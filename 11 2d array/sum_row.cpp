#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 5;
    int data[ROWS][COLS] = {
        {4, 7, 2, 8, 5},
        {9, 3, 6, 1, 4},
        {2, 8, 5, 3, 7}
    };
    
    for(int i = 0; i < ROWS; i++) {
        int rowSum = 0;
        for(int j = 0; j < COLS; j++) {
            rowSum += data[i][j];
        }
        cout << "Sum of row " << i+1 << ": " << rowSum << endl;
    }
    
    return 0;
}