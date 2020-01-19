#include"LinkedList.h"
#include <iostream>

// Linked list constructor which initialises the linked list
LinkedList::LinkedList() {
	this->length = 0;
	this->head = NULL;
}

LinkedList::~LinkedList() {
	std::cout << "LIST DELETED\n";
}

// passes chosen integer as the linked list head value
void LinkedList::add(int data) {

	Node* node = new Node();
	node->data = data;
	node->next = this->head;
	this->head = node;
	this->length++;
}


void LinkedList::print() {
	Node* head = this->head;
	int i = 1;
	// print index and values of linked list while assigning the next value as the head of the linked list
	while (head) {
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}
}