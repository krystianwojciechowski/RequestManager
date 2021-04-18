//
// Created by krystian on 11.04.2021.
//

#include "RequestBuilder.h"

#include <string>
void RequestBuilder::setMethod(std::string method) {
    this->request.setMethod(method);
}

void RequestBuilder::addHeader(std::string header,std::string value) {
    this->request.addHeader(header,value);
}

void RequestBuilder::setResource(std::string resource) {
    this->request.setResource(resource);
}

void RequestBuilder::setURL(std::string url) {
//    this->request.setUrl(url);
}

Request* RequestBuilder::build() {
    return &this->request;
}

void RequestBuilder::setBody(std::string body) {
    this->request.setBody(body);
}

RequestBuilder::RequestBuilder() {
//    this->request = Request();
}


