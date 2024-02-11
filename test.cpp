#include<bits/stdc++.h>
using namespace std;

using v = std::vector<int>;

#define l(k) ((k?k:new v())->size())

int foo(v* s=nullptr)
{
    static v* x= NULL;
    v* y =NULL;
    static int r;
    s?x=s,y=s:s;
    r+=l(x);
    r-=l(y);
    return r;
}
int main()
{
   
  vector<int> vec1;
  vec1.assign({1,2,3,4});
  v vec2(4,0);

  foo(&vec1);foo();
  foo(&vec2);foo();

  cout<<"ams:"<<foo();
  return 0;



}