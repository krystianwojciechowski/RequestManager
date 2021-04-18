//
// Created by krystian on 10.04.2021.
//

#include "Request.h"
#include <list>
#include <iterator>
#include <iostream>
#include <netdb.h>
#include "RequestBuilder/Method/Method.h"
Request::Request()  {
    this->request_stream = std::stringstream();
}

void Request::addHeader(std::string header,std::string value) {
    this->headers.push_back(header + ":" + value);
}

void Request::setBody(std::string body) {
    this->body = body;
}

void Request::setMethod(std::string method) {
    this->method = method;
}

void Request::setResource(std::string resource) {
    this->resource = resource;
}



std::stringstream* Request::toStringStream() {
    this->request_stream<<this->method<<" "<<this->resource<<" HTTP/1.1"<<this->newline();
    std::copy(this->headers.begin(),this->headers.end(),std::ostream_iterator<std::string>(this->request_stream,"\r\n"));
    //this->request_stream<<this->url;
   // this->request_stream<<this->body;
    this->request_stream<<this->newline()<<this->newline();
    return &this->request_stream;
}

//void Request::setUrl(std::string url) {
////    std::string uri = "url" + std::string(*host->h_addr_list) + this->newline();
////    this->url = std::string(*host->h_addr_list);
//}

std::string Request::newline() {
    return "\r\n";
}

void Request::setHost(std::string host) {
    this->host = host;
}


