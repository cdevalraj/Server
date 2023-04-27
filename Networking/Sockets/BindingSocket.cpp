#include "BindingSocket.hpp"

WEBS::BindingSocket::BindingSocket(int domain,int service,int protocol,int port,u_long interface):SimpleSocket(domain,service,protocol,port,interface)
{
    // Establishing network connection
    connect_network(get_sock(),get_address());
    test_connection(binding);
}

void WEBS::BindingSocket::connect_network(int sock,struct sockaddr_in address)
{
    binding=bind(sock,(struct sockaddr *)&address,sizeof(address));
}
int WEBS::BindingSocket::get_binding()
{
    return binding;
}