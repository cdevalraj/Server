#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include<stdio.h>  
#include<sys/socket.h>
#include<netinet/in.h>
#include<iostream>

namespace WEBS
{
    class SimpleSocket
    {
        private:
            struct sockaddr_in address;
            int sock;
        public:
            SimpleSocket(int domain,int service,int protocol,int port,u_long interface);
            virtual void connect_network(int sock,struct sockaddr_in address)=0;
            void test_connection(int to_test);
            struct sockaddr_in get_address();
            int get_sock();
            void set_connection(int con);
    };
}
#endif