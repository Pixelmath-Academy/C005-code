#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int row =1; row <=n; row++){
        for(int col =1; col <=n; col++){
            if(row == col || row + col == n+1){
                cout << "x ";
            }
            else cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

//row = 5, col = 1 -> 5 + 1 = 6
//row = 4, col = 2
//row = 3, col = 3
//row = 2, col = 4
//row = 1, col = 5