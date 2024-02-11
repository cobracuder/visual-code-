#include<bits/stdc++.h>
using namespace std;
/*void help(node*head,node*last)
{
    node*cur=head;
    node*prev=NULL,*next=NULL;
    while(cur!=last)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    head=prev;
}
node* rev_in_group(node*head)
{
    int gpsize;
    cin>>gpsize();
    node*last=head,*temp=head;

    while(temp)
    {
        int flag=0;
        last=temp;
        for(int i=0;i<gpsize;i++)
        {
            if(!last){flag=1;break;}
            else
            last=last->next;
        }
        if(flag!=0)
        return head;
        else
        help(temp,last);
        temp=last;

    }
}*/
node*help(node*head,int k)
{
    node*cur=head;
    for(int i=0;i<k;i++)
    {
        if(!cur)return head;
        cur=cur->next;
    }
    node*curr2=head;
    node*prev=NULL,*next=NULL;
    for(int i=0;i<k;i++)
    {
        next=curr2->next;
        curr2->next=prev;
        prev=curr2;
        curr2=next;
    }
    head->next=help(curr2,k);
    return prev;

}
int main()
{
    par ob1;
    cal(ob1);
   // cout<<ob1.a;

}