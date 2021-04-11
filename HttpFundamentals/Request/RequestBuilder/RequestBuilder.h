//
// Created by krystian on 11.04.2021.
//

#ifndef REQUESTMANAGER_REQUESTBUILDER_H
#define REQUESTMANAGER_REQUESTBUILDER_H
#include <string>

#include "../Request.h"
#include "Methods/Methods.h"

class RequestBuilder {
private:
    Request request;
public:
    void addHeader(std::string header,std::string value);
    void setMethod(Methods method=Methods::GET);
    void setURL(std::string url);
    void setResource(std::string resource);
    void setBody(std::string body);
    Request* build();
};


#endif //REQUESTMANAGER_REQUESTBUILDER_H
