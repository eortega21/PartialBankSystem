#include "itemList.h"
#include <iostream>

itemList::itemList()
{
}

void itemList::add(int data) {
	Node* temp = new Node(data);
	temp->next = nullptr;

	if (root == nullptr) {
		root = temp;
		tail = temp;
	}
	else {
		tail->next = temp;
		tail = tail->next;
	}
}

void itemList::display() {
	std::cout << "display" << std::endl;
	Node* displayList = root;
		while (displayList != nullptr) {
			std::cout << "data: " << displayList->data << std::endl;
			displayList = displayList->next;
		}
}
