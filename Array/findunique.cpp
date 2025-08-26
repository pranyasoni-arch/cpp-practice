#include <iostream>
#include <vector>
using namespace std;
int findunique(vector<int> &arr)
{
    int ans=0;
    for(int i=0;i<(int)arr.size();i++)
    {
        ans=ans^arr[i];
    }

   
    return ans;
}
int main()
{
    vector<int> arr={2,2,43,43,4,6,4};
    cout<<findunique(arr)<<endl;
    return 0;
    
}