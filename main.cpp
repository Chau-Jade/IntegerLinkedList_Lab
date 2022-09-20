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
	cout << sll->size() << endl; // print out the size of the linked list

	// test remove first method
	sll->removeFirst();
	sll->print();

	// test remove last method
	sll->removeLast();
	sll->print();

	// test get(int pos) method.
	cout << sll->get(2) << endl;

	// test the addAtPosition method
	sll->addAtPosition(5, 2);
	sll->print();

	// test the removePosition method 
	sll->removePosition(4);
	sll->print();

	delete sll;

	return 0;
}

