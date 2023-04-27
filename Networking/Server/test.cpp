#include<iostream>
#include "TestServer.hpp"

int main()
{
    WEBS::TestServer t;
    return 0;
}

// g++ Server/test.cpp Server/TestServer.cpp Server/SimpleServer.cpp Sockets/SimpleSocket.cpp Sockets/BindingSocket.cpp Sockets/ListeningSocket.cpp -o test.exe