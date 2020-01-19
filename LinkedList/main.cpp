#include"LinkedList.h"
#include<iostream>

int main() {

	LinkedList linked_lad;
	for (int i = 0; i < 10; i++) {
		linked_lad.add(i);
	}
	linked_lad.print();

	std::cout << "linked list length: " << linked_lad.length << std::endl;

	
	return 0;
}