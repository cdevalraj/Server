#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include<stdio.h>
#include "SimpleSocket.hpp"

namespace WEBS
{
    class BindingSocket: public SimpleSocket
    {
        private:
            int binding;
        public:
            BindingSocket(int domain,int service,int protocol,int port,u_long interface);
            void connect_network(int sock,struct sockaddr_in address);
            int get_binding();
    };
}

#endif