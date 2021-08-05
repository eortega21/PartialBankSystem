#include "cx_main.h"
cx_main::cx_main(){
}
cx_main::cx_main(string fname, string lname, int id)
{
	this->fname = fname;
	this->lname = lname;
	this->id = id;
}
int cx_main::getID() {
	return id;
}
string cx_main::getfname() {
	return fname;
}
string cx_main::getlname() {
	return lname;
}
void cx_main::addDepositAcc(account_info &depositAcc){
	allDepositAccounts.add(depositAcc);
}
void cx_main::remDepositAcc(string accName) {
	allDepositAccounts.removeAcc(allDepositAccounts.getRoot(),accName);
}
void cx_main::displayDepositAcc() {
	allDepositAccounts.display();
}
bool cx_main::decAmount(string accName, double amount) {
	return allDepositAccounts.balanceDec(accName,amount);
}
bool cx_main::incAmount(string accName, double amount) {
	return allDepositAccounts.balanceInc(accName, amount);
}

//remove account;