#include<bits/stdc++.h>
using namespace std;
string encryption(string s)
{
    string a[8]={"aba","jab","faa","dab","mug","hug","nug","luh"};
    int a1=rand()%8;
    int a2=rand()%8;
    char sp[]={'@','#','*'};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        s[i]=sp[rand()%3];
    }
    swap(s[0],s[s.size()-1]);
    reverse(s.begin(),s.end());
    string en=a[a1]+s+a[a2];
    cout<<endl<<en<<endl;
    return en;
}
string decryp(string s)
{
    string dec=s.substr(3,s.size()-6);
    reverse(dec.begin(),dec.end());
    for(int i=0;i<dec.size();i++)
    {
        if(dec[i]=='@'||dec[i]=='#'||dec[i]=='*')
        {
            dec[i]=' ';
        }
    }
    swap(dec[0],dec[dec.size()-1]);
    return dec;
    
}
int main()
{
    cout<<"enter the string:";
    string s;
    getline(cin,s);
    string en,dec;
    for(int i=0;i<4;i++)
    en=encryption(s);
    cout<<"\nencrpt--"<<en;
    cout<<"\ndecrip--"<<decryp(en);
}