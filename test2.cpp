#include<bits/stdc++.h>

using namespace std;
int gcd(int a ,int b)
{
    if(a%b==0)return b;
    return gcd(b,a%b);
}
int main()
{
   
   int n;
  
   cin>>n;
   while(n--)
   {
        int a,b;
        cin>>a>>b;
        cout<<endl;
        if(b%a==0)
        {
            cout<<b*(b/a);
        }
        else
        {
            int val=gcd(a,b);
            cout<<(a/val)*(b);
        }
   }
}
