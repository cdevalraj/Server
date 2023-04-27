#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include<stdio.h>
#include "SimpleSocket.hpp"

namespace WEBS
{
    class ConnectingSocket: public SimpleSocket
    {
        private:
            int binding;
        public:
            ConnectingSocket(int domain,int service,int protocol,int port,u_long interface);
            void connect_network(int sock,struct sockaddr_in address);
            int get_binding();
    };
}

#endif