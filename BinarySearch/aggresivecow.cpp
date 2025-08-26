#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
bool isPoss(vector<int>&stalls,int k,int mid,int n){
    int cow=1;
    int lastpos=stalls[0];
    for(int i=1;i<n;i++){
        if(stalls[i]-lastpos>=mid){
            cow++;
        
        if(cow==k){
            return true;
        }
        lastpos=stalls[i];
    }
    }
   return false;
}
int aggresivecows(vector<int>& stalls,int k){
    sort(stalls.begin(),stalls.end());
 	int s = 1;
    int n = stalls.size();
    int e=stalls[n-1]-stalls[0];
    int ans = -1;
    int mid = s + (e-s)/2;
       while(s<=e) {
        if(isPoss(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}
int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3;
    cout << "Maximum minimum distance = " << aggresivecows(stalls, k) << endl;
    return 0;
}