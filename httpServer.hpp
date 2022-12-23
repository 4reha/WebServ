#pragma once

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string>

namespace http
{
    class httpServer
    {
    public:
        httpServer(std::string ip_address, int port);
        ~httpServer();
        void startListen();

    private:
        std::string m_ip_address;
        int m_port;
        int m_socket;
        int m_new_socket;
        long m_incomingMessage;
        struct sockaddr_in m_socketAddress;
        unsigned int m_socketAddress_len;
        std::string m_serverMessage;

        void startServer();
        void closeServer();
        void acceptConnection(int &new_socket);
        std::string buildResponse();
        void sendResponse();
    };

}