#include "cxinfo.h"

cxinfo::cxinfo(string fname, string lname,int id)
{
	this->fname = fname;
	this->lname = lname;
	this->id = id;
}



int cxinfo::getID() {
	return id;
}

string cxinfo::getfname() {
	return fname;
}

string cxinfo::getlname() {
	return lname;
}
