//
// Created by krystian on 18.04.2021.
//

#ifndef REQUESTMANAGER_DOMPARSER_H
#define REQUESTMANAGER_DOMPARSER_H


#include "Node/Node.h"

class DOMParser {

public:
    //the idea is that we will read file in chunks and parse these chunks, in different class we will ensure that chunk will contain at least one tag,preferably with all children. Initial test will hit performance for sure, but in case we get invalid file, we can eliminate it before wasting time for trying to parse it bit by bit.
    Node* parse(std::string chunk);
};


#endif //REQUESTMANAGER_DOMPARSER_H
