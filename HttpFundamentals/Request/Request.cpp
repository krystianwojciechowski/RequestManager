//
// Created by krystian on 10.04.2021.
//

#include "Request.h"
#include <list>
#include <iterator>
#include <iostream>
#include <netdb.h>

Request::Request()  {
}

void Request::addHeader(std::string header,std::string value) {
    this->headers.push_back(header + ":" + value);
}

void Request::setBody(std::string body) {
    this->body = body;
}

void Request::setMethod(int method) {
    this->method = this->mapIntToMethod(method);
}

void Request::setResource(std::string resource) {
    this->resource = resource;
}

std::string Request::mapIntToMethod(int method) {
    switch (method) {
        case 1:
            return "GET";
        case 2 :
            return "POST";
        case 3:
            return "PUT";
        case 4:
            return "PATCH";
        case 5:
            return "DELETE";
        case 6:
            return "UPDATE";
        default:
            return "GET";
    }
}

std::stringstream* Request::toStringStream() {
    this->request_stream<<this->method<<" "<<this->resource<<" HTTP/2"<<this->newline();
    std::copy(this->headers.begin(),this->headers.end(),std::ostream_iterator<std::string>(this->request_stream,"\n"));
    //this->request_stream<<this->url;
    this->request_stream<<this->body;

    return &this->request_stream;
}

void Request::setUrl(std::string url) {

    struct hostent* host = gethostbyname(url.c_str());
    std::string uri = "url" + std::string(*host->h_addr_list) + this->newline();
    this->url = std::string(*host->h_addr_list);
}

std::string Request::newline() {
    return "\r\n";
}


