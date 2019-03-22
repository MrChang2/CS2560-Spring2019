#pragma once
#include "CustomerData.h"
class PreferredCustomer : public CustomerData
{
	double purchaseAmount=0;
	double discountLevel=0;
public:
	PreferredCustomer();
	PreferredCustomer(std::string ln, std::string fn, std::string a, std::string c, std::string s, std::string z, std::string p, int cn, bool m, double pa);
	~PreferredCustomer();
	void addPurchaseAmount(double a);
	double getPurchaseAmount();
	void setDiscountLevel();
	double getDiscountLevel();
};

