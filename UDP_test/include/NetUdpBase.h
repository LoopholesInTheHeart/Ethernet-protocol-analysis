//
// Created by dust on 23-4-25.
//

#ifndef UDP_TEST_NETUDPBASE_H
#define UDP_TEST_NETUDPBASE_H

// base
#include <iostream>
#include <string>

// net
#include <netinet/in.h>// It has the constants and structures required for Internet domain address.
#include <sys/socket.h>// It contains the data structures required for socket
#include <sys/types.h> // It has definitions of number of data types used for system calls.

namespace LiuLi {

    class NetUdpBase {
    public:
        NetUdpBase() = delete;
        NetUdpBase(std::string ip, std::string port);
        NetUdpBase(std::string ip, int port);
        ~NetUdpBase();


    private:
        std::string ip;
        std::string port;
        int sockID_;
    };

}// namespace LiuLi

#endif//UDP_TEST_NETUDPBASE_H
