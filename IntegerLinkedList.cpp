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

int IntegerLinkedList::size() {
	return countNodes;
}

void IntegerLinkedList::removeFirst() {
	// If there is one node in the list, delete all;
	if (this->countNodes == 1) {
		delete this->head;
		this->head = 0;
		this->tail = 0;
		this->countNodes--;
		return;
	}

	// Get the address of the first node
	Node *firstNode = this->head;

	// Move the head pointer to the next node
	this->head = this->head->getNext();

	// Delete the first node
	delete firstNode;

	// Decrease the total nodes by 1
	this->countNodes--;
}

void IntegerLinkedList::removeLast() {
	// If there is one node in the list, delete all;
	if (this->countNodes == 1) {
		delete this->head;
		this->head = 0;
		this->tail = 0;
		this->countNodes--;
		return;
	}

	// Get the second to last node
	Node *nodePointer = this->head;
	while (nodePointer->getNext() != this->tail) {
		nodePointer = nodePointer->getNext();
	}

	// Delete the current tail
	delete nodePointer->getNext();

	// Made the second to last node becomes the last node
	nodePointer->setNext(0); //i.e after the last node is NULL

	// Update the tail
	this->tail = nodePointer;

	// Reduce the number of nodes by 1
	this->countNodes--;
}

int IntegerLinkedList::get(int pos) {
	// Check is position entered is appropriate
	if (this->countNodes < pos) {
		return -1;
	}

	//Get the address of the first node
	Node *nodeOfInterest = this->head;

	//Loop through the linked list until the desired position
	for (int i = 1; i < pos; i++) {
		nodeOfInterest = nodeOfInterest->getNext();
	}

	// return the value of the node at the desired position
	return nodeOfInterest->getValue();
}

IntegerLinkedList::~IntegerLinkedList() {
	// If the linkedlist is not empty, loop through and delete each node from tail to head
//	if (this->head->getNext() != 0) {
//
//	}
}
