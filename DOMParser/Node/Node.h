//
// Created by krystian on 18.04.2021.
//

#ifndef REQUESTMANAGER_NODE_H
#define REQUESTMANAGER_NODE_H


#include <string>

class Node {
private:
    std::string tagname;
    std::string value;
    std::string** attributes;
    Node* parent_node;
    Node* child_nodes;
public:
    Node(std::string tagname,std::string value,std::string** attributes,Node* parent_node,Node* child_nodes);
    const std::string &getTagname() const;
    const std::string &getValue() const;
    const std::string **getAttributes() const;
    const Node* getParentNode() const;
    const Node* getChildNodes() const;
    ~Node();
};


#endif //REQUESTMANAGER_NODE_H
