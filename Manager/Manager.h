//
// Created by krystian on 10.04.2021.
//

#ifndef REQUESTMANAGER_MANAGER_H
#define REQUESTMANAGER_MANAGER_H


class Manager {

private:
    Request request;
    RequestEngine engine;
    void makeRequest();
public:
    Response getResponse();
};


#endif //REQUESTMANAGER_MANAGER_H
