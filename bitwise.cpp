#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
void cal_c(int n,string &s)
{
    if(n==1||n==0)
    {
        s+=n+'0';
        return ;
    }
    cal_c(n/2,s);
    s+=(n%2)+'0';
}
string bitss(int n)
{
    for(int i=0;i<1e9;i++);
    string s="0000";
    cal_c(n,s);
    return s;
}

string bit(int n)
{
    string s="";
    while(n)
    {
        s+=(n%2)+'0';
        n=n/2;
    }
    reverse(s.begin(),s.end());
    return s;

}
int main()
{
    // int64_t a=10000000;
    // for(int i=0;i<100;i++)
    // cout<<(a>>i)<<endl;
    // cout<<endl<<a;
    auto start = high_resolution_clock::now();
    cout<<((10)^(9))<<"\t"<<bitss(3)<<endl;
    cout<<((3)^(9))<<"\t"<<bitss(10)<<endl;
    cout<<((10)^(3))<<"\t"<<bitss(9)<<endl;
    auto end = high_resolution_clock::now();
    cout << "time taken:" << duration_cast<microseconds>(end-start).count();


    auto s2 = high_resolution_clock::now();
    bitss(1000);
    auto e2 = high_resolution_clock::now();
    cout << "\nTime taken by bitss: " << duration_cast<microseconds>(e2-s2).count();
    auto s3 = high_resolution_clock::now();
    bit(1000);
    auto e3 = high_resolution_clock::now();
    cout << "\nTime taken by bit:" << duration_cast<microseconds>(e3-s3).count();

    cout << "\nWhole time :" << duration_cast<microseconds>(e3-start).count();





}