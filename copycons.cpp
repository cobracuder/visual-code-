#include<bits/stdc++.h>
using namespace std;
class A
{
    
    int b;
    public:
    int a;
    A()
    {
        a=5;
        b=10;
        cout<<"\ncos of A";
    }
    /*A(A &c)
    {
        a=c.a;
        b=c.b;
        cout<<a<<" "<<b;
    }*/
    ~A()
    {
        cout<<"\ndestructor a";
    }
};
class B 
{
    int c; 
    int d;
    public:
    B(int c)
    {
        cout<<"\ncos of b";
    }
    ~B()
    {
        cout<<"\ndestructor b";
    }

};
class C{

 public:
 C(int d)
 {
    cout<<"\ncons of c\n";
 }
 ~C()
    {
        cout<<"\ndestructor C";
    }

};
class D:public B, virtual public C
{
    public:
  D(int a):B(a),C(a)
 {
    cout<<"\ncons of D\n";
 }
 ~D()
    {
        cout<<"\ndestructor D";
    }   
};
int main()
{
    //A ob1;
   // A ob2=ob1;
   // ob2.a=20;
    //cout<<endl<<ob2.a;
    D ob4(3);
    //cout<<ob4.a;

}