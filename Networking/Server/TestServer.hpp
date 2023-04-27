#ifndef TestServer_hpp
#define TestServer_hpp

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include "SimpleServer.hpp"

namespace WEBS
{
    class TestServer: public SimpleServer
    {
        private:
            char buffer[30000]={0};
            int new_socket;
            void accepter();
            void handler();
            void responder();
        public:
            TestServer();
            void start_server();
    };
}

#endif