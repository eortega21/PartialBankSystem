#pragma once
#ifndef CX_ACCOUNTS_H
#define CX_ACCOUNTS_H

#include "account_info.h"
#include <iostream>	

struct Node {
public:
	account_info* data;
	Node* next;
	Node() {
		next = nullptr;
	}
	Node(account_info &adata): Node() {
		this->data = &adata;
	}
};

class cx_accounts{
private:
	account_info data;
	Node* head, * tail;
public:
	cx_accounts();
	Node* getRoot();
	void setRoot(Node* head);
	void add(account_info &data);
	bool removeAcc(Node *root,string accName);
	bool balanceDec(string acc, double amount);
	bool balanceInc(string acc, double amount);
	void display();
	
};
#endif