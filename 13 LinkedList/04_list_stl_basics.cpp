
#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    list<int> a = {3,1,2,2,5,4,4,4,3};
    a.push_front(9);
    a.push_back(0);

    cout<<"iterate: ";
    for(int x: a) cout<<x<<" ";
    cout<<"\n";

    a.remove(4); // remove all 4s
    cout<<"after remove 4: ";
    for(int x: a) cout<<x<<" ";
    a.remove_if([](int x){ return x%2==0; }); // remove even
    cout<<"after remove: ";
    for(int x: a) cout<<x<<" ";
    cout<<"\n";

    a.sort();
    a.unique(); // remove consecutive duplicates
    cout<<"after sort+unique: ";
    for(int x: a) cout<<x<<" ";
    cout<<"\n";

    list<int> b = {7,6,2,1};
    b.sort();
    a.merge(b); // b becomes empty
    cout<<"after merge: ";
    for(int x: a) cout<<x<<" ";
    cout<<"\n";

    list<string> s1 = {"alpha","beta","gamma"};
    list<string> s2 = {"ONE","TWO","THREE"};
    auto it = s1.begin(); ++it; // position after "alpha"
    s1.splice(it, s2, s2.begin()); // move "ONE" into s1
    cout<<"splice result: ";
    for(const auto& s: s1) cout<<s<<" ";
    cout<<"| s2 size: "<<s2.size()<<"\n";

    // Iterator validity note: splice/merge do not invalidate iterators to moved elements.
    return 0;
}
