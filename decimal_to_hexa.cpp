#include<bits/stdc++.h>
using namespace std;
string help(int num)
{
    string s="";
    if(num==0)return "0";
   while(num!=0)
   {
        int val=num%16;
        if(val<10)
        {
            s+=('0'+val);
        }else{
            s+=('A'+(val-10));
        }
        num/=16;
   }
   reverse(s.begin(),s.end());
   return s;

}
int main()
{
    cout<<help(266);
}