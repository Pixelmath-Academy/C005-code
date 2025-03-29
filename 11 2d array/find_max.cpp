#include <iostream>
#include <climits>
using namespace std;

int main() {

    int mx = -1e9;

    const int ROWS = 3;
    const int COLS = 4;
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 67, 8},
        {9, 10, 11, 12}
    };

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            //if(matrix[i][j] > mx){
                //mx = matrix[i][j];
            //}
            mx = max(mx, matrix[i][j]);
        }
    }

    cout << mx;
    
    return 0;
}