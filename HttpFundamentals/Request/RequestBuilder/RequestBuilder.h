//
// Created by krystian on 11.04.2021.
//

#ifndef REQUESTMANAGER_REQUESTBUILDER_H
#define REQUESTMANAGER_REQUESTBUILDER_H
#include <string>

#include "../Request.h"
#include "Method/Method.h"

class RequestBuilder {
private:
    Request request;
public:
    RequestBuilder();
    void addHeader(std::string header,std::string value);
    void setMethod(std::string method=Method::GET);
    void setURL(std::string url);
    void setResource(std::string resource);
    void setBody(std::string body);
    Request* build();

};


#endif //REQUESTMANAGER_REQUESTBUILDER_H
