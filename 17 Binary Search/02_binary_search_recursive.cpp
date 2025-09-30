
#include <iostream>
#include <vector>
using namespace std;
int bsRec(const vector<int>& a, int l, int r, int target){
    if(l > r) return -1; //base case
    int mid = l + (r-l)/2;
    if(a[mid] == target) return mid;
    if(a[mid] < target) return bsRec(a, mid+1, r, target);
    else return bsRec(a, l, mid-1, target);
}
int main(){
    vector<int> a = {2,4,6,8,10};
    cout << bsRec(a,0,a.size()-1,8) << "\n";
    cout << bsRec(a,0,a.size()-1,7) << "\n";
    return 0;
}
