#include <iostream>
#include <vector>
using namespace std;
int peak(vector<int> v){
    int s=0,e=v.size()-1;
 
    while(s<e){
   int mid =s+(e-s)/2;
        if(v[mid]<v[mid+1]){
            s=mid+1;}
            else{
                e=mid;
            mid=s+(e-s)/2;}
    }
     return s;
}
int peakindex(vector<int>&arr){
    return peak(arr);
}
int main(){
    vector<int>arr={5,6,7,4,3,2};
    int idx = peakindex(arr);

    cout << "Peak element index: " << idx << endl;
    cout << "Peak element value: " << arr[idx] << endl;
}
