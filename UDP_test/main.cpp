#include <iostream>
#include <netinet/in.h>// It has the constants and structures required for Internet domain address.
#include <sys/socket.h>// It contains the data structures required for socket
#include <sys/types.h> // It has definitions of number of data types used for system calls.

#include "include/NetUdpBase.h"

int main() {
    LiuLi::NetUdpBase myUdp( "192.168.2.205", 12345);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
