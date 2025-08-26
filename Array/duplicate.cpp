#include <iostream>
#include <vector>
using namespace std;
int duplicate(vector<int> &arr)
{
    int ans=0;
    for(int i=0;i<(int)arr.size();i++)
    {
        ans=ans^arr[i];
    }

    for(int i=1;i<(int)arr.size();i++)
    {
        ans=ans^i;
    }
    return ans;
}
int main()
{
    vector<int> arr={1,2,2,3,4,5};
    cout<<duplicate(arr)<<endl;
    return 0;
    
}