#include<bits/stdc++.h>
using namespace std;
int priority(char x){
	if(x=='(' || x==')') return 0;
	if(x=='+' || x=='-') return 1;
	if(x=='*' || x=='/') return 2;
	if(x=='^') return 3;
	return -1;
}
string infixToPostfix(string exp){
	// Write your code here
	string ans="";
	stack<char>st;
	for(int i=0;i<exp.size();i++)
	{
		if((exp[i]>='a'&&exp[i]<='z')||(exp[i]>='0'&&exp[i]<='9'))
		{
			ans+=exp[i];
		}
		else
		if(exp[i]==')')
		{
			while(!st.empty()&&st.top()!='(')
			{
				ans+=st.top();
				st.pop();
			}
            
            st.pop();

		}
		else
		if(exp[i]=='(')
		{
			st.push('(');

		}
		else
		{
			while(!st.empty()&&priority(exp[i])<=priority(st.top()))
			{
				ans+=st.top();
				st.pop();
			}
			st.push(exp[i]);
		}
	}
	while(!st.empty())
	{
		ans+=st.top();
		st.pop();
	}
	return ans;
	
}

int main()
{
    string s;
    cin>>s;
    cout<<infixToPostfix(s);
}
