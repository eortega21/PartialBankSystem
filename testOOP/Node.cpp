#include "Node.h"
#include <iostream>

Node::Node() {

}




void Node::inOrder(Node* node){

}

void Node::Insert(int data)
{
	addNode(root, data);
}
void Node::addNode(newNode* node, int data){
	if (node == nullptr) {
		root = new newNode(data);
	}
	else {
	}
}
void Node::display() {
	std::cout << root->data << std::endl;
}
int Node::search(int data)
{
	return 0;
}
