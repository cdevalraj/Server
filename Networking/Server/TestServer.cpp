#include "TestServer.hpp"

WEBS::TestServer::TestServer():SimpleServer(AF_INET,SOCK_STREAM,0,80,INADDR_ANY,10)
{
    start_server();
}

void WEBS::TestServer::accepter()
{
    struct sockaddr_in address=get_socket()->get_address();
    int addrlen=sizeof(address);
    new_socket=accept(get_socket()->get_sock(),(sockaddr *)&address,(socklen_t *)&addrlen);
    read(new_socket,buffer,30000);
}

void WEBS::TestServer::handler()
{
    std::cout<<buffer<<std::endl;
}

void WEBS::TestServer::responder()
{
    char* str="Hello World!!!";
    write(new_socket,str,strlen(str));
    close(new_socket);
}

void WEBS::TestServer::start_server()
{
    while(true)
    {
        std::cout<<"========WAITING==========\n";
        accepter();
        handler();
        responder();
        std::cout<<"==========DONE===========\n";
    }
}