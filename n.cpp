#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[5];
    int *p=arr,*q=arr;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        *arr=a;
        arr++;
    }
    
    //delete[](p);

    cout<<*q;
}