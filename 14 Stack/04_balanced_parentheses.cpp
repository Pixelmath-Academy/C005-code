
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(const string& s){
    stack<char> st;
    for(char c: s){
        if(c=='('||c=='['||c=='{') st.push(c);
        else if(c==')'||c==']'||c=='}'){
            if(st.empty()) return false;
            char t = st.top(); st.pop();
            if((c==')'&&t!='(') || (c==']'&&t!='[') || (c=='}'&&t!='{')) return false;
        }
    }
    return st.empty();
}

int main(){
    cout << boolalpha;
    cout << isValid("([]{})") << "\n"; // true
    cout << isValid("([)]") << "\n";   // false
    return 0;
}
