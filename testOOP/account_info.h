#pragma once
#ifndef ACCOUNT_INFO_H
#define ACCOUNT_INFO_H

#include <string>
using namespace std;
class account_info
{
private:
	string account_nm;
	double balance;
public:
	account_info();
	account_info(string account_name, double balance);
	void setAccName(string newName);
	string getAccName();
	void setBalance(double bal);
	double getBalance();
	void add_amount(double amount);
	bool spent_amount(double amount);
};

#endif

