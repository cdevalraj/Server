#include "ListeningSocket.hpp"

WEBS::ListeningSocket::ListeningSocket(int domain,int service,int protocol,int port,u_long interface,int bklg):BindingSocket(domain,service,protocol,port,interface)
{
    backlog=bklg;
    start_listening();
    test_connection(listening);
}

void WEBS::ListeningSocket::start_listening()
{
    listening=listen(get_sock(),backlog);
}

int WEBS::ListeningSocket::get_listening()
{
    return listening;
}

int WEBS::ListeningSocket::get_backlog()
{
    return backlog;
}