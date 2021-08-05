#include "cx_accounts.h"
#include <iostream>

using namespace std;
cx_accounts::cx_accounts()
{
}
Node* cx_accounts::getRoot() {
	return head;
}
void cx_accounts::setRoot(Node* head) {
	this->head = head;
}
void cx_accounts::add(account_info &data) {
	Node* temp = new Node(data);//send it directly
	//temp->data = &data;		//or assign it.
	temp->next = nullptr;

	if (head == nullptr) {
		head = temp;
		tail = temp;
	}
	else {
		tail->next = temp;
		tail = tail->next;
	}
}
bool cx_accounts::removeAcc(Node* root, string accName) {
	/*if (head != nullptr) { //head will not work if it was private.
		if (head->data->getAccName() == accName) {
			head = head->next;
			return false;
		}
	}*/
	if (getRoot() != nullptr) {
		if (getRoot()->data->getAccName() == accName) {
			setRoot(getRoot()->next);
			return false;
		}
	}
	if (root != nullptr) {
		if (root->data->getAccName() == accName) {
			return true;
		}
		else {
			if (removeAcc(root->next, accName) == true) {
				root->next = root->next->next;
			}
		}
	}
	return false;
}

//search by giving unique ID to acc
//temporarily searching from acc name which is not safe.
bool cx_accounts::balanceDec(string acc, double amount) {
	Node* temp = head;
	if (temp != nullptr){
		while (temp != nullptr) {
			if (temp->data->getAccName() ==acc) {
				return temp->data->spent_amount(amount);
			}
			temp = temp->next;
		}
	}
	return false;
}
bool cx_accounts::balanceInc(string acc, double amount) {
	Node* temp = head;
	if (temp != nullptr) {
		while (temp != nullptr) {
			if (temp->data->getAccName() == acc) {
				temp->data->add_amount(amount);
				return true;
			}
			temp = temp->next;
		}
	}
	return false;
}
void cx_accounts::display() {
	std::cout << "     Display" << std::endl;
	std::cout << "=================" << std::endl;
	std::cout << "displayList: "<< std::endl;

Node* displayList = head;
	while (displayList != nullptr) {
		std::cout << "Type: " << displayList->data->getAccName()<< std::endl;
		std::cout << "Data: " << displayList->data->getBalance() <<"\n"<< std::endl;
		displayList = displayList->next;
	}
	std::cout << "--------------------" << std::endl;
	std::cout << "     end of list" << std::endl;

}