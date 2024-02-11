#include<bits/stdc++.h>
using namespace std;
class demo{
    int a;
    public:
    void get()
    {
        cout<<"\nenter the value:";
        cin>>a;
    }
    void show()
    {
        cout<<"\nyour value is:"<<a;
    }
    demo operator +(demo B)
    {
        demo c;
        c.a=a*B.a;
        return c;
    }

};
class d2{
    int a;
    public:
    void get()
    {
        cout<<"\nenter the value:";
        cin>>a;
    }
    void show()
    {
        cout<<"\nyour value is:"<<a;
    }
    void operator ++(int)//postfix ke liyee
    {
        a=a+5;
    }
    void operator ++()
    {
        a=a-5;
    } 

};

int main()
{
    /*demo a,b,c;
    a.get();
    b.get();
    c=a+b;
    c.show();*/
    d2 b;
    b.get();
    ++b;
    b.show();

}