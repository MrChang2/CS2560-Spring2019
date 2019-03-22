#include "CustomerData.h"



CustomerData::CustomerData()
{
}
CustomerData::CustomerData(std::string ln, std::string fn, std::string a, std::string c, std::string s, std::string z, std::string p, int cn, bool m) {
	this->setLastName(ln);
	this->setFirstName(fn);
	this->setAddress(a);
	this->setCity(c);
	this->setState(s);
	this->setZip(z);
	this->setPhone(p);
	customerNumber = cn;
	mailingList = m;
}

CustomerData::~CustomerData()
{
}

void CustomerData::setCustomerNumber(int n) {
	customerNumber = n;
}
int CustomerData::getCustomerNumber() {
	return customerNumber;
}
void CustomerData::switchMailingList() {
	if (mailingList) {
		mailingList = false;
	}
	else {
		mailingList = true;
	}
}
void CustomerData::setMailingList(bool m) {
	mailingList = m;
}
bool CustomerData::getMailingList() {
	return mailingList;
}