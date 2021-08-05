#pragma once
#ifndef CXINFO_H
#define CXINFO_H

#include <string>
using namespace std;

class cxinfo
{
private:
	string fname;
	string lname;
	int id;
public:
	cxinfo(string fname, string lname, int id);
	
	string getfname();
	string getlname();
	int getID();
};

#endif // !CXINFO_H