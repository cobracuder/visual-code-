#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[][3]={{1,2,3},
    {1,2,3}},B[][2]={{1,2},
    {3,4},{5,6}};
    int res[2][2]={};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                res[i][j]+=A[i][k]*B[k][j];
            }
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}