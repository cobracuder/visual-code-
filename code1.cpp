#include<sys/socket.h>    //socket
#include<arpa/inet.h> //inet_addr
#include<netdb.h> //hostent
#include<bits/stdc++.h>
using namespace std;
struct sockaddr_in srv;
#define PORT 9990
int main()
{
    //intitalize socket
    int nsocket=socket(AF_INET,SOCK_STREAM,0);
    if(nsocket<0)
    cout<<"error\n";
    else
    cout<<"everything is good="<<nsocket; 
    //intitialize the environment for sockaddr
    srv.sin_family=AF_INET;
    srv.sin_port=htons(PORT);


}