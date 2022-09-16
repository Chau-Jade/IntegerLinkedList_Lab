#include <iostream>
#include "Node.hpp"
using namespace std;

int main(int argc, char **argv) {

// Note: sll = singly linked list 
  IntegerLinkedList *sll = new IntegerLinkedList();
  
  sll->add(1);
  sll->add(4);
  sll->add(9);
  sll->add(16);
  sll->add(25);
  
  delete sll;

  return 0;
}

