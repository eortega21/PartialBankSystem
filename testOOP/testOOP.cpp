
#include <iostream>
//#include "cxinfo.h"
#include "cx_main.h"
#include "account_info.h" 
#include "cx_accounts.h" //temp will remove

using namespace std;

cx_main addAcc(cx_main* temp, string str, double data) {
	account_info *insert = new account_info(str,data);
	temp->addDepositAcc(*insert);
	return *temp;
}


int main()
{
	/*
	account_info* acc; //obslolete
	
	cx_main p1("ed","or",3452214);
	
	//test obsolote
	acc = new account_info("brown",34.33);
	p1.addDepositAcc(*acc);
	//end test

	p1 = addAcc(&p1,"checkNew",86.33);
	p1 = addAcc(&p1,"bonk", 34.29);
	p1 = addAcc(&p1, "adgh", 94.00);
	p1 = addAcc(&p1, "krilin", 39.78);
	p1 = addAcc(&p1, "brian", 56.34);

	p1.displayDepositAcc();	
	p1.remDepositAcc("bonk");
	p1.displayDepositAcc();
	p1.remDepositAcc("brian");
	p1.displayDepositAcc();
	p1.remDepositAcc("brown");
	p1.displayDepositAcc();
	*/
	
	string f_name, l_name;
	double id_num;
	cout << "What is client first name" << endl;
	cin >> f_name;
	cout << "What is client last name" << endl;
	cin >> l_name;
	cout << "ID num" << endl;
	cin >> id_num;

	cx_main p1(f_name, l_name, id_num);

	int MAIN_LOOP = 0;
	const int EXIT_PROGRAM = 6;
	do{
		cout << "1. add account" << endl;
		cout << "2. remove account" << endl;
		cout << "3. charge" << endl;
		cout << "4. deposit" << endl;
		cout << "5. display accounts" << endl;
		cout << "6. exit" << endl;
		cin >> MAIN_LOOP;

		string accName;
		double amount;
		switch(MAIN_LOOP) {
		case 1:
			cout << "acc name: " << endl;
			cin >> accName;
			cout << "initial deposit" << endl;
			cin >> amount;
			p1 = addAcc(&p1, accName, amount);
			break;
		case 2:
			cout << "acc name: " << endl;
			cin >> accName;
			p1.remDepositAcc(accName);
			break;
		case 3:
			cout << "acc name: " << endl;
			cin >> accName;
			cout << "charge amount:" << endl;
			cin >> amount;
			p1.decAmount(accName,amount); //change to catch boolean
			break;
		case 4:
			cout << "acc name: " << endl;
			cin >> accName;
			cout << "deposit amount" << endl;
			cin >> amount;
			p1.incAmount(accName, amount); // change to catch boolean
			break;
		case 5:
			p1.displayDepositAcc();
		default:
			break;
		};

	} while (MAIN_LOOP != EXIT_PROGRAM);
	cout << "Goodbye." << endl;
	
}

/*
	cout << "test " << endl;
	cx_accounts test1;
	test1.add(acc);
	test1.display();
	test1.balanceDec("bonk",1.99);
	test1.display();*/
