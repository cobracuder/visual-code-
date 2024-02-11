#include<bits/stdc++.h>
using namespace std;
int help(int par[],int i,vector<int>&recieved)
{
    
    if(recieved[par[i]]==1||par[i]==-1)
    {
        recieved[i]=1;
        return  i;}
    
    return help(par,par[i],recieved);

}
int main()
{
    int par[]={-1,0,1,1,2,2,3,4,4};
    vector<int>recieved(9,0);
    int order[]={8,4,6,5};
    vector<int>ans;
    for(int i=0;i<4;i++)
    {
        int val=help(par,order[i],recieved);
        if(val!=-1)
        ans.push_back(val);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}