//
// Created by dust on 23-4-25.
//

#include "../include/NetUdpBase.h"

namespace LiuLi {
    NetUdpBase::NetUdpBase(std::string ip, std::string port) { NetUdpBase(ip, std::atoi(port.c_str())); }
    NetUdpBase::NetUdpBase(std::string ip, int port) {

            sockID_=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    }
    NetUdpBase::~NetUdpBase() {}

}// namespace LiuLi