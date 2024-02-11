#include<bits/stdc++.h>
using namespace std;
class base
{
     public:
     int base=0;
     void dis()
     {
        cout<<base<<"base\n";
     }

};
class deri:public base
{
    public:
     int derived=0;
    void dis()
    {
        cout<<"\nderived="<<derived;
    }
};
//int deri::derived=0;
int main()
{
    base *ptr;
    deri p1,p2;
    ptr=&p1;

    ptr->dis();
   // ptr->derived;
   p1.derived=3;
   cout<<p1.derived;

}