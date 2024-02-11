#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26]={0};
    string s;
    cout<<"\nenter the string:";
    cin>>s;
    if(s.size()<26)
    {
        cout<<"\nnot paligram";
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]-'a'>=0&&s[i]-'a'<26)
        {
            arr[s[i]-'a']++;
        }else
        if(s[i]-'A'>=0&&s[i]-'A'<26)
        {
            arr[s[i]-'A']++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
        {cout<<"\n not palagrim:";
        return 0;
        }

    }
    cout<<"\npaligram";
    
}
