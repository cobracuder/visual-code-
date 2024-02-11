#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val=0,Node*next=NULL)
    {
        this->val=val;
        this->next=next;
    }
};
int main()
{
    int n;
    cout<<"\nEnter the valuee:";
    cin>>n;
    Node*head=NULL;
    Node*temp;
    for(int i=0;i<n;i++)
    {
        if(head==nullptr)
        {
            head=new Node();
            cin>>head->val;
            temp=head;
        }
        else
        {
            int a;
            cin>>a;
            Node*ele=new Node(a);
            temp->next=ele;
            temp=ele;
        }
    }
    cout<<"\nYour linked list is-------->";
    temp=head;
    while(temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return 0;
}
