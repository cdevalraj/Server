#include "SimpleServer.hpp"

WEBS::SimpleServer::SimpleServer(int domain,int service,int protocol,int port,u_long interface,int bklg)
{
    socket=new ListeningSocket(domain,service,protocol,port,interface,bklg);
}

WEBS::ListeningSocket* WEBS::SimpleServer::get_socket()
{
    return socket;
}