#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector< vector<int>> pairsum(vector<int>&arr,int s){
    vector <vector<int>> ans;

    for (int i=0;i<(int)arr.size();i++){

        for(int j=i+1;j<(int)arr.size();j++){
            if(arr[i]+arr[j]==s){

                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);
            }
        }
    }
        
     sort(ans.begin(), ans.end());
   return ans;     
      
}

int main(){
    vector <int> arr={1,2,3,4,5,6};
    int s=6;
    vector<vector<int>> result=pairsum(arr,s);
for (vector<int>& p : result) {
    cout << "[" << p[0] << ", " << p[1] << "]" << endl;
}

}
