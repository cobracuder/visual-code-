#include<iostream>
#include<utility>
using namespace std;
int main()
{
    auto a = 
            #define F(x,y) make_pair(x+y,x);
             #include "data.inc"
             #undef F
    auto b = 
            #define F(x,y) make_pair(x##y,#x);
             #include "data.inc"
             #undef F
    cout<<"f"<<a.first + b.first<<endl;
    cout<<"s"<<a.second + 1<< 1 + b.second <<endl;
    
}
