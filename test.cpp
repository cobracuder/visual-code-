#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int(10*sizeof(int));
    for(int i=0;i<10;i++)
    a[i]=i;

    cout<< (*(a-1+2));

}