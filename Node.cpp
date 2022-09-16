/*
 * Node.cpp
 *
 *  Created on: Aug 20, 2021
 *      Author: luke
 */

#include "Node.hpp"

int Node::getValue() const {
  return this->value;
}

void Node::setNext(Node *n) {
  this->next = n;
}

Node * Node::getNext() const {
  return this->next;
}

Node::Node(int v) : value(v), next(0) {
  // alternately, these two lines of code
  //this->value = v;
  //this->next = 0;
}

Node::~Node() {
// TODO Auto-generated destructor stub
}
