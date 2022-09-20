/*
 * IntegerLinkedList.h
 *
 *  Created on: 16/09/2022
 *      Author: Jade
 */

#ifndef INTEGERLINKEDLIST_H_
#define INTEGERLINKEDLIST_H_

// forward declarations of class Node
class Node;

class IntegerLinkedList {
private:
	Node *head;
	Node *tail;
	int countNodes;
public:
	void print() const;
	void add(int v);
	void addFront(int v);
	int size() const;
	void removeFirst();
	void removeLast();
	int get(int pos) const;
	void addAtPosition(int value, int pos);

	IntegerLinkedList();
	virtual ~IntegerLinkedList();
};

#endif /* INTEGERLINKEDLIST_H_ */
