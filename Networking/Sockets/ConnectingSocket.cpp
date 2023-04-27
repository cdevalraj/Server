#include "ConnectingSocket.hpp"

WEBS::ConnectingSocket::ConnectingSocket(int domain,int service,int protocol,int port,u_long interface):SimpleSocket(domain,service,protocol,port,interface)
{
    // Establishing network connection
    connect_network(get_sock(),get_address());
    test_connection(binding);
}

void WEBS::ConnectingSocket::connect_network(int sock,struct sockaddr_in address)
{
    binding=connect(sock,(struct sockaddr *)&address,sizeof(address));
}
int WEBS::ConnectingSocket::get_binding()
{
    return binding;
}