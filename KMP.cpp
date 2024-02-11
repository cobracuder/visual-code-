#include<bits/stdc++.h>
using namespace std;
vector<int>checkPre(string s)
{
    vector<int>pre(s.size(),0);
    int len=0,i=1;
    while(i<s.size())
    {
        if(s[len]==s[i])
        {
            pre[i]=len+1;
            len++,i++;
        }
        else
        {
            if(len!=0)
            len=pre[len-1];
            else
            {pre[i]=0;
            i++;}
        }
    }
    return pre;
}
int main()
{
    string pattern="akad";
    string str="akadbakadanaana";
    vector<int>pre=checkPre(pattern);
    int i=0,j=0,count=0;
    while(i<str.size())
    {
        if(str[i]==pattern[j])
        {
            i++,j++;
        }
        else
        {
            if(j!=0)
            {
                j=pre[j-1];
            }
            else{
                i++;
            }
        }
        if(j==pattern.size())
        {
            count++;
        }
    }
    cout<<count;
}
