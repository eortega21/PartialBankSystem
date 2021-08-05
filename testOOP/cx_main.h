#pragma once
#ifndef CX_MAIN_H
#define CX_MAIN_H
#include "account_info.h"
#include "cx_accounts.h"

#include <string>
using namespace std;

class cx_main
{
private:
	string fname;
	string lname;
	int id;
	cx_accounts allDepositAccounts;
	
public:
	
	cx_main();
	cx_main(string fname, string lname, int id);

	string getfname();
	string getlname();
	int getID();

	void addDepositAcc(account_info &depositAcc);
	void remDepositAcc(string accName);
	void displayDepositAcc();
	bool decAmount(string accName, double amount);
	bool incAmount(string accName, double amount);
};

#endif 

