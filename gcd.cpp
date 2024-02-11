#include<bits/stdc++.h>
using namespace std;
int gcd(int dividend ,int divisor)
{
    if(dividend%divisor==0)return divisor;
    return gcd(divisor,dividend%divisor);
}
int main()
{
     cout<<gcd(10,5);
     cout<<endl<<(12*18)/gcd(12,18);
}
