#include <iostream>
#include "Node.hpp"
#include "IntegerLinkedList.h"
using namespace std;

int main(int argc, char **argv) {

// Note: sll = singly linked list
	IntegerLinkedList *sll = new IntegerLinkedList();

	sll->add(1);
	sll->add(4);
	sll->add(9);
	sll->add(16);
	sll->add(25);

	// print the linkedlist
	sll->print();

	delete sll;

	return 0;
}

