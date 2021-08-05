#pragma once

struct newNode {
	int data = 0;
	newNode* head;
	newNode* tail;
	newNode() {
		data = 0;
		head = nullptr;
		tail = nullptr;
	}
	newNode(int data) : newNode() {
		this->data = data;
	}

};
class Node
{
public:
	int data;
	newNode* root;

	Node();
	
	void addNode(newNode* node, int data);
	void inOrder(Node* node);

	void Insert(int data);
	int search(int data);
	void display();
	

};

