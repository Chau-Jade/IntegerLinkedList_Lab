/*
 * IntegerLinkedList.cpp
 *
 *  Created on: 16/09/2022
 *      Author: Jade
 */

#include "IntegerLinkedList.h"
#include <iostream>
#include "Node.hpp"
using namespace std;

IntegerLinkedList::IntegerLinkedList() {
	this->head = 0;
	this->tail = 0;
	this->countNodes++;
}

void IntegerLinkedList::print() const {
	// Set pointer to print to be the head pointer
	Node *nodeToPrint = this->head;

	// Print out the first node
	cout << nodeToPrint->getValue();

	// Loop through the linked list, to get the address of adjacent nodes
	while (nodeToPrint->getNext() != 0) {
		cout << " -> " << nodeToPrint->getNext()->getValue();
		nodeToPrint = nodeToPrint->getNext();
	}

	cout << endl;
}

IntegerLinkedList::~IntegerLinkedList() {
	// TODO Auto-generated destructor stub
}

