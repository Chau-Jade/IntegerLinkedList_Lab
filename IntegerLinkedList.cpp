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
	this->countNodes = 0;
}

void IntegerLinkedList::print() const {
	// Set pointer to print to be the head pointer
	Node *nodePointer = this->head;

	// If the list is empty, return nothing
	if (nodePointer == 0)
		return;

	// Print out the first node
	cout << nodePointer->getValue();

	// Loop through the linked list, to get the address of adjacent nodes
	while (nodePointer->getNext() != 0) {
		cout << " -> " << nodePointer->getNext()->getValue();
		nodePointer = nodePointer->getNext();
	}

	cout << endl;
}

void IntegerLinkedList::add(int v) {

	Node *nodePointer;
	// If linked list is empty, add the new node to the linked list
	if (this->head == 0) {
		this->head = new Node(v);
		this->tail = this->head; //Both head and tail refers to the same node because there is only one node in the linked list
	} else {
//        else {
//                nodePointer = this->head;
//                while (nodePointer->getNext() != 0) { // move to the last node of the linked list.
//                       nodePointer = nodePointer->getNext();
//                }
//                node->setNext(new Node(v));
//        }

// Refactor the method using tail of linked list
		nodePointer = new Node(v); //Created a new node
		this->tail->setNext(nodePointer); //Add the node next to the current tail
		this->tail = nodePointer; //Update the tail to be the newly added node.

	}
	// Increase the total number of nodes in the linked list by 1
	this->countNodes++;
}

void IntegerLinkedList::addFront(int v) {
	// Create a new node on the heap
	Node *n = new Node(v);

	// Move the current head to be the second element in the linked list
	n->setNext(this->head);

	// Set the head to be the newly created node.
	this->head = n;

	// Increase the total number of nodes in the linked list by 1
	this->countNodes++;
}
IntegerLinkedList::~IntegerLinkedList() {
	// TODO Auto-generated destructor stub
}

