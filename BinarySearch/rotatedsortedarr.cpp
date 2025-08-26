#include <iostream>
#include <vector>
using namespace std;
int pivot(vector<int>& arr, int n){
     int s=0, e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){

        if(arr[mid]>arr[0]){
      s=mid+1;
        }
        else{
            e=mid;
        }
          mid=s+(e-s)/2;
    }
    return s;
}
int first(vector<int>&arr,int s,int e,int key){ 
   
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
int findposition(vector<int> &arr,int n,int k){
    int p = pivot(arr, n);
 if( k >= arr[p] && k <= arr[n-1])
    {
        return first(arr, p, n-1, k);
    }
    else
    {
        return first(arr, 0, p , k);
    }
    
}
int main(){
      vector<int> arr = {7, 9, 1, 2, 3, 5, 6};
    int n = arr.size();
    int key = 3;

    int pos = findposition(arr, n, key);
    if(pos != -1){
        cout << "Element " << key << " found at index " << pos << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;

}