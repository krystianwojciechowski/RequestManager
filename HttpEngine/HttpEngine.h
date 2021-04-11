//
// Created by krystian on 10.04.2021.
//

#ifndef REQUESTMANAGER_HTTPENGINE_H
#define REQUESTMANAGER_HTTPENGINE_H
#include <string>
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string>
class HttpEngine {
private:
//    Connection connection;
public:
    void connect(int domain=AF_INET,int type=SOCK_STREAM,int protocol=0);
    void disconnect();
//    Connection getConnection();
};


#endif //REQUESTMANAGER_HTTPENGINE_H
