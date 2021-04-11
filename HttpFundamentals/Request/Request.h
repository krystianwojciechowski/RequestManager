//
// Created by krystian on 10.04.2021.
//
#include <string>
#ifndef REQUESTMANAGER_REQUEST_H
#define REQUESTMANAGER_REQUEST_H
#include <list>
#include <sstream>

class Request {
private:
    std::list<std::string> headers;
    std::string body;
    std::string url;
    std::string resource;
    std::string method;
    std::stringstream request_stream;
    std::string mapIntToMethod(int method);
    std::string newline();
public:
    Request();
    void addHeader(std::string header,std::string value);
    void setBody(std::string body);
    void setResource(std::string resource);
    void setMethod(int method);
    void setUrl(std::string url);
    std::stringstream* toStringStream();
};


#endif //REQUESTMANAGER_REQUEST_H
