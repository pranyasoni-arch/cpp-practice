#include <vector>
#include<iostream>
using namespace std;

bool ifposs(vector<int> arr,int n, int m,int mid){
    int painter=1;
    int time=0;
    for(int i=0;i<n;i++){
        if(time+arr[i]<=mid){
            time+=arr[i];
        }
        else{
            painter++;
            if(painter>m||arr[i]>mid){
                return false;
            }
            time=arr[i];
        }
        if(painter>m){
            return false;
        }
    }
    return true;
}
int painter(vector<int> arr,int n,int m){
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        if (ifposs(arr,n,m,mid)){
       ans=mid;
       e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> time={5,5,5,5};
    int n=time.size();
    int m=2;
    cout<<painter(time,n,m)<<endl;
}
