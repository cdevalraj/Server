#ifndef SimpleServer_hpp
#define SimpleServer_hpp

#include<stdio.h>
#include "../webslib-networking.hpp"

namespace WEBS
{
    class SimpleServer
    {
        private:
            ListeningSocket* socket;
            virtual void accepter()=0;
            virtual void handler()=0;
            virtual void responder()=0;
        public:
            SimpleServer(int domain,int service,int protocol,int port,u_long interface,int bklg);
            virtual void start_server()=0;
            ListeningSocket* get_socket();
    };
}

#endif