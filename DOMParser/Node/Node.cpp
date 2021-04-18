//
// Created by krystian on 18.04.2021.
//

#include "Node.h"

Node::Node(std::string tagname, std::string value, std::string **attributes, Node *parent_node, Node *child_nodes):tagname(),value(),attributes(),parent_node(),child_nodes() {

}


const std::string &Node::getTagname() const {
    return tagname;
}

const std::string &Node::getValue() const {
    return value;
}

const std::string** Node::getAttributes() const {
    return attributes;
}

const Node* Node::getParentNode() const {
    return parent_node;
}

const Node* Node::getChildNodes() const {
    return child_nodes;
}

//first idea for storing nodes. Like elements in java linked list, each node contains pointers to other nodes. When main node is deleted, command cascades to child nodes
Node::~Node() {
    delete[] child_nodes;
}

