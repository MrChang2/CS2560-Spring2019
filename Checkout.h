#pragma once
#include <string>
#include <map>
class Checkout
{
protected:
	std::map<std::string, int> prices;
	int total;
	struct Discount{
		int nbrOfItems;
		int discountPrice;
	};
	std::map<std::string, Discount> discounts;
	std::map<std::string, int> items;

	void calculateItem(std::string item, int itemCnt);
	void calculateDiscount(std::string item, int itemCnt, Discount discount);
public:
	Checkout();
	~Checkout();
	void addItemPrice(std::string item, int price);
	void addItem(std::string item);
	void addDiscount(std::string item, int nbrOfItems, int discountPrice);
	int calculateTotal();
};
