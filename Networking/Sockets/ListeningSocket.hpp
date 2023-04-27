#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include<stdio.h>
#include "BindingSocket.hpp"

namespace WEBS
{
    class ListeningSocket: public BindingSocket
    {
        private:
            int backlog,listening;
        public:
            ListeningSocket(int domain,int service,int protocol,int port,u_long interface,int bklg);
            void start_listening();
            int get_listening();
            int get_backlog();
    };
}

#endif