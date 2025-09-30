
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int>& a, int target){
    int l=0, r=(int)a.size()-1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(a[mid] == target) return mid;
        else if(target > a[mid]) l = mid+1;
        else r = mid-1;
    }
    return -1;
}
int main(){
    vector<int> a = {1,3,5,7,9};
    cout << binarySearch(a,7) << "\n";
    cout << binarySearch(a,2) << "\n";
    return 0;
}
