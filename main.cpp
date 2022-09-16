#include <iostream>
#include "Node.hpp"
using namespace std;

void print(Node *n) {

  cout << n->getValue();
  while (n->getNext() != 0) {
    cout << " -> " << n->getNext()->getValue();
    n = n->getNext();
  }
  cout << endl;

}

int main(int argc, char **argv) {

  Node *sq0 = new Node(0);
  Node *sq1 = new Node(1);
  Node *sq2 = new Node(4);
  sq1->setNext(sq2);
  Node *sq3 = new Node(9);
  sq2->setNext(sq3);
  Node *sq4 = new Node(16);
  sq3->setNext(sq4);
  Node *sq5 = new Node(25);
  sq4->setNext(sq5);

  sq0->setNext(sq1);

  print(sq0);
  print(sq1);

  delete sq1;
  delete sq2;
  delete sq3;
  delete sq4;
  delete sq5;

	return 0;
}

