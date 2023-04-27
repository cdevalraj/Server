#include "SimpleSocket.hpp"

WEBS::SimpleSocket::SimpleSocket(int domain,int service,int protocol,int port,u_long interface)
{
    //Defining struct address parameters
    address.sin_family=domain;
    address.sin_port=htons(port);
    address.sin_addr.s_addr=htonl(interface);

    // Setting up the socket
    sock=socket(domain,service,protocol);
    
    // Testing the connection
    test_connection(sock);
    
}

void WEBS::SimpleSocket::test_connection(int to_test)
{
    if(to_test<0)
    {
        perror("Failed to connect");
        exit(EXIT_FAILURE);
    }
}

// Getter functions
struct sockaddr_in WEBS::SimpleSocket::get_address()
{
    return address;
}
int WEBS::SimpleSocket::get_sock()
{
    return sock;
}