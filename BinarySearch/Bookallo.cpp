#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid){
    int studentcount=1;
    int pgsum=0;

    for(int i=0;i<n;i++){
        if (pgsum+arr[i]<=mid){
            pgsum+=arr[i];
        }

        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            pgsum=arr[i];
        }
        if(studentcount>m){
            return false;
        }
    }
    return true;
}
int Bookallo(vector<int> arr, int n,int m){
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){

        if(isPossible(arr,n,m,mid)){

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
    vector<int> books={10,20,30,40};
    int n=books.size();
    int m=2;
    cout<<Bookallo(books,n,m)<<endl;
    return 0;

}