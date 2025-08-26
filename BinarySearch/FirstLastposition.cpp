#include <iostream>
#include <vector>
using namespace std;
int first(vector<int>&arr,int n,int key){
     
    int s=0, e=n-1;
   
    
    int ans=-1;
    while(s<=e){
int mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return ans;
}
int last(vector<int>&arr,int n,int key){
 int s=0, e=n-1;
    
    int ans=-1;
    while(s<=e){
int mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = first(arr, n, k);
    p.second = last(arr, n, k);
    
    return p;
}
int main(){
    vector<int> arr={2,3,4,3,3,5,3};
    int k=3;
     pair<int, int> ans = firstAndLastPosition(arr, arr.size(), k);
    
    cout << "First occurrence of " << k << " is at index: " << ans.first << endl;
    cout << "Last occurrence of " << k << " is at index: " << ans.second << endl;

    return 0;
}