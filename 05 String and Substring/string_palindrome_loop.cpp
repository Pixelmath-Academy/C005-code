#include <iostream>
using namespace std;

int main(){
    string s;
    bool isPalindrome = true;
    cin >> s;
    int si = s.length();
    for(int i=0; i<s.length()/2; i++){
        if(s[i] != s[si - i - 1]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome) cout << "YES";
    else cout << "NO";
    return 0;
}