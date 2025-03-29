#include <iostream>
using namespace std;

int main() {
    const int ROWS_A = 2, COLS_A = 3;
    const int ROWS_B = 3, COLS_B = 2;
    
    int A[ROWS_A][COLS_A] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int B[ROWS_B][COLS_B] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    
    int result[ROWS_A][COLS_B] = {0};
    
    for(int i = 0; i < ROWS_A; i++) {
        for(int j = 0; j < COLS_B; j++) {
            for(int k = 0; k < COLS_A; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    cout << "Result is:" << endl;
    for(int i = 0; i < ROWS_A; i++) {
        for(int j = 0; j < COLS_B; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}