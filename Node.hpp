/*
 * Node.h
 *
 *  Created on: Aug 20, 2021
 *      Author: luke
 */

#ifndef NODE_HPP_
#define NODE_HPP_

class Node {
private:
  int value;
  Node * next;
public:
  void setNext(Node *n);
  Node * getNext() const;
  int getValue() const;
  Node(int v);
  virtual ~Node();
};

#endif /* NODE_HPP_ */
