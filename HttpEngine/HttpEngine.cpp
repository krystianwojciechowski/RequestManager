//
// Created by krystian on 10.04.2021.
//

#include "HttpEngine.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string>
#include <strings.h>
#include <iostream>
#include <arpa/inet.h>
#include <errno.h>
#include <iostream>
#include <ctype.h>
#include <cstring>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <unistd.h>
#include <sstream>
#include <fstream>
#include <string>
void HttpEngine::connect(int domain,int type,int protocol) {
    std::cout<<"Starting";
    int inet =AF_INET;
    sa_family_t family = (sa_family_t )domain;
    int socket_descriptor = socket(family,type,protocol);
    std::cout<<"Starting";
    struct hostent* host_name = gethostbyname("localhost");
    struct sockaddr_in client_data = {
            .sin_family = family,
            .sin_port = htons(3000),
    };

    memcpy(&client_data.sin_addr,host_name->h_addr_list,host_name->h_length);
    inet_pton(family,"127.0.0.1",&client_data.sin_addr);
    socklen_t length = sizeof(client_data);
    const int i =::connect(socket_descriptor, (struct sockaddr*)&client_data, length);

    void* buffer = alloca(256);


    std::stringstream ss;
    ss << "GET /"  << " HTTP/1.1\r\n"
       << "Accept: */*\r\n"
       << "\r\n\r\n";
    int j = send(socket_descriptor,ss.str().c_str(),ss.str().length(),MSG_CONFIRM);
    char cur;
    while ( read(socket_descriptor, &cur, 1) > 0 ) {
        std::cout << cur;
    }
//    close(socket_descriptor);
//    close(new_socket_file_descriptor);

}