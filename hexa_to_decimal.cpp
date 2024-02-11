#include<bits/stdc++.h>
using namespace std;
int cal_value(char a)
{
    if(a>='A')
    return  a-'A'+10;
    else
    return a-'0';
}
int help(string s)
{
    int ans=0;
    for(int i=s.size()-1,j=0;i>=0;i--,j++)
    {
        ans+=cal_value(s[i])*(1<<4*j);
    }
    return ans;
}
int main()
{
    string s="10A";
    cout<<help(s);
}