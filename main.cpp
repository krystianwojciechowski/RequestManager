#include <iostream>
#include "HttpEngine/HttpEngine.h"
#include "HttpFundamentals/Request/RequestBuilder/RequestBuilder.h"

int main() {

    RequestBuilder requestBuilder;
    requestBuilder.setResource("/");
    requestBuilder.setMethod(Method::GET);
    requestBuilder.setBody("body");
    requestBuilder.addHeader("accept","*/*");
    requestBuilder.setURL("localhost");
    std::stringstream* stringstream = requestBuilder.build()->toStringStream();
    std::cout<<stringstream->str();
    HttpEngine connection;
     connection.connect(requestBuilder.build());
}
