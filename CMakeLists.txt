cmake_minimum_required(VERSION 3.17)
project(RequestManager)

set(CMAKE_CXX_STANDARD 20)

#add_executable(RequestManager main.cpp Manager/Manager.cpp Manager/Manager.h  HttpEngine/HttpEngine.cpp HttpEngine/HttpEngine.h HttpEngine/Connection/Connection.cpp HttpEngine/Connection/Connection.h)
add_executable(RequestManager main.cpp  HttpEngine/HttpEngine.cpp HttpEngine/HttpEngine.h HttpFundamentals/Request/RequestBuilder/RequestBuilder.cpp HttpFundamentals/Request/RequestBuilder/RequestBuilder.h HttpFundamentals/Request/RequestBuilder/Methods/Methods.h HttpFundamentals/Request/Request.cpp HttpFundamentals/Request/Request.h)