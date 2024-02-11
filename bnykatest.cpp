#include<bits/stdc++.h>
using namespace std;
int help(int i,vector<int>arr,int k,int prev_val)
{
    if(k!=0&&i==arr.size())return 1e8;
    if(k==0)return 0;
    
    int val1=abs(arr[i]-prev_val)+help(i+1,arr,k-1,arr[i]);
    int val2=help(i+1,arr,k,prev_val);
    return min(val1,val2);
}

int main()
{
    vector<int>arr;
    for(int i=0;i<9;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int ans=INT_MAX;
    for(int i=0;i<arr.size();i++)
    ans=min(ans,help(0,arr,4,arr[i]));
    cout<<ans;
}