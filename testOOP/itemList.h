#pragma once
#ifndef ITEMLIST_H
#define ITEMLIST_H

struct Node {
	int data;
	Node* next;
	Node() {
		next = nullptr;
	}
	Node(int data): Node(){
		this->data = data;
	}
};
class itemList
{
public:
	int data;
	Node* root;
	Node* tail;

	itemList();
	
	void add(int data);
	void display();
};

#endif
