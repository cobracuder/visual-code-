#include<bits/stdc++.h>
using namespace std;
/*
11 
13
1 3 200
3 4 300
4 9 300
9 10 400
1 5 299
5 4 200
5 6 200
6 9 100
1 2 300
2 7 400
8 7 400
8 10 700
10 11 50
1 11
*/
void dijkstra(int src,vector<pair<int,int> >adj[],vector<int>&dis,vector<string>&route,map<int,string>&mp)
{
    
    priority_queue<pair<int,pair<int,string> >,vector<pair<int,pair<int,string> > >,greater<pair<int,pair<int,string> > > >pq;
    //queue<pair<int,pair<int,string> > >pq ;;
    pq.push( make_pair(0,make_pair(src,mp[src])) );
    dis[src]=0;
    route[src]=mp[src];
    while(!pq.empty())
    {
        auto temp=pq.top();
        pq.pop();
        int d=temp.first;
        int node=temp.second.first;
        string rut=temp.second.second;
        for(auto i:adj[node])
        {
            if(dis[i.first]>d+i.second)
            {
                dis[i.first]=d+i.second;
                route[i.first]=rut+"->"+mp[i.first];
                pq.push(make_pair(dis[i.first],make_pair(i.first,route[i.first])));
            }
        }
    }

}
void adjen(vector<vector<int> >&edges,vector<pair<int,int> >adj[])
{
    for(auto i:edges)
    {
        adj[i[0]].push_back(make_pair(i[1],i[2]));
        adj[i[1]].push_back(make_pair(i[0],i[2]));
    }
}
int main()
{
    
    map<int,string>mp;
    mp[1]="High school";
    mp[2]="Gas agency road";
    mp[3]="Bus stand";
    mp[4]="Police thana";
    mp[5]="Lambu ki chakki";
    mp[6]="Quile wali gali";
    mp[7]="Shivam ka ghar";
    mp[8]="Bilaspur road";
    mp[9]="2 number chowk";
    mp[10]="chhatri wala kua";
    mp[11]="Harshit ka ghar";

    int n;
    //cout<<"ENTER NUMBER ";
    cin>>n;
    int m;
    //cout<<"\nENTER NUMBER of edges";
    cin>>m;
    vector<vector<int> >edges;
    for(int i=0;i<m;i++)
    {
        int a;
       // cout<<"enter U,V and W. ";
        vector<int>res;
        for(int i=0;i<3;i++)
        {
            cin>>a;
            res.push_back(a);
        }
        edges.push_back(res);
    }
    vector<string>route(n+1,"");
    vector<int>dis(n+1,1e8);
    vector<pair<int,int> >adj[n+1];
    adjen(edges,adj);
    char c='y';
    while(c=='y')
    {
    int source;
    //cout<<"\nwhere are you:";
    cin>>source;
    dijkstra(source,adj,dis,route,mp);
    int rr;
    //cout<<"enter destinaton";
    cin>>rr;
    cout<<"location:"<<mp[source]<<"\t destination:"<<mp[rr];
    cout<<"\n\nbest route:\n";
    cout<<route[rr]<<"\n distance to be covered ="<<dis[rr]<<" m\n";
    
    cout<<"\ndo you wan to check again: enter y";
    cin>>c;
    }
}