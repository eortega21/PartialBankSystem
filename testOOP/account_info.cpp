#include "account_info.h"
#include <iostream>

account_info::account_info() {

}
account_info::account_info(string account_name, double balance) {
	this->balance = balance;
	account_nm = account_name;
}
void account_info::setAccName(string newName) {
	this->account_nm = newName;
}
string account_info::getAccName() {
	return account_nm;
}
void account_info::setBalance(double bal) {
	this->balance = bal;
}
double account_info::getBalance() {
	return balance;
}
void account_info::add_amount(double amount) {
	try {
		balance += amount;
	}
	catch(exception e){
	};
}

bool account_info::spent_amount(double amount) {
	if (balance >= amount) {
		balance -= amount;
		return true;
	}
	return false;
}
