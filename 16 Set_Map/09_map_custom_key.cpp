
#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Point {
    int x,y;
};

struct Cmp {
    bool operator()(const Point& a, const Point& b) const {
        if(a.x != b.x) return a.x < b.x;
        return a.y < b.y;
    }
};

int main(){
    map<Point,string,Cmp> mp;
    mp[{1,2}] = "A";
    mp[{0,0}] = "Origin";
    mp[{2,1}] = "B";

    for(auto &kv: mp){
        cout << "(" << kv.first.x << "," << kv.first.y << ") -> " << kv.second << "\n";
    }
    return 0;
}
