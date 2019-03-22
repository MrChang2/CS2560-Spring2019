#pragma once
#include "PersonData.h"
#include <string>
class CustomerData : public PersonData
{
	int customerNumber;
	bool mailingList;
public:
	CustomerData();
	CustomerData(std::string ln, std::string fn, std::string a, std::string c, std::string s, std::string z, std::string p, int cn, bool m);
	~CustomerData();
	void setCustomerNumber(int n);
	int getCustomerNumber();
	void switchMailingList();
	void setMailingList(bool m);
	bool getMailingList();
};

