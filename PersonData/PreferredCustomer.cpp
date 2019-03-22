#include "PreferredCustomer.h"



PreferredCustomer::PreferredCustomer()
{
}
PreferredCustomer::PreferredCustomer(std::string ln, std::string fn, std::string a, std::string c, std::string s, std::string z, std::string p, int cn, bool m, double pa) {
	this->setLastName(ln);
	this->setFirstName(fn);
	this->setAddress(a);
	this->setCity(c);
	this->setState(s);
	this->setZip(z);
	this->setPhone(p);
	this->setCustomerNumber(cn);
	this->setMailingList(m);
	purchaseAmount = pa;
	setDiscountLevel();
}

PreferredCustomer::~PreferredCustomer()
{
}

void PreferredCustomer::addPurchaseAmount(double a) {
	purchaseAmount = purchaseAmount + a;
}
double PreferredCustomer::getPurchaseAmount() {
	return purchaseAmount;
}
void PreferredCustomer::setDiscountLevel() {
	if (purchaseAmount > 2000) {
		discountLevel = 0.1;
	}
	else if (purchaseAmount > 1500) {
		discountLevel = 0.07;
	}
	else if (purchaseAmount > 1000) {
		discountLevel = 0.06;
	}
	else if (purchaseAmount > 500) {
		discountLevel = 0.05;
	}
	else {
		discountLevel = 0;
	}
}
double PreferredCustomer::getDiscountLevel() {
	return discountLevel;
}