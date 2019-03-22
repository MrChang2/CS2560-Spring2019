#include <iostream>
#include <string>
#include "PreferredCustomer.h"

int main() {
	PersonData Person("Jones", "Larry", "1234 Street Ave", "Normaltown", "Kentucky", "54321", "123-456-7890");
	CustomerData Customer("Smith", "Susan", "2359 Altadina Ave", "La Santo", "Tennessee", "19348", "323-594-0917", 133, false);
	PreferredCustomer preferredCustomer("Grump", "Rupert", "89125 Sleepy Street", "Lazytown", "Texas", "84391", "565-893-1294", 420, true, 1500);

	std::cout << Person.getFirstName() << " " << Person.getLastName() << " is a normal guy." << std::endl;
	std::cout << "He lives on " << Person.getAddress() << ", " << Person.getCity() << " " << Person.getState() << " " << Person.getZip() << std::endl;
	std::cout << "His phone number is " << Person.getPhone() << std::endl;
	std::cout << std::endl;

	std::cout << Customer.getFirstName() << " " << Customer.getLastName() << " is a normal customer." << std::endl;
	std::cout << "She lives on " << Customer.getAddress() << ", " << Customer.getCity() << " " << Customer.getState() << " " << Customer.getZip() << std::endl;
	std::cout << "Her phone number is " << Customer.getPhone() << std::endl;
	std::cout << "Her customer number is " << Customer.getCustomerNumber() << std::endl;
	if (Customer.getMailingList()) {
		std::cout << "She is on the mailing list." << std::endl;
	}
	else {
		std::cout << "She is not on the mailing list." << std::endl;
	}
	std::cout << std::endl;

	std::cout << preferredCustomer.getFirstName() << " " << preferredCustomer.getLastName() << " is a preferred customer." << std::endl;
	std::cout << "He lives on " << preferredCustomer.getAddress() << ", " << preferredCustomer.getCity() << " " << preferredCustomer.getState() << " " << preferredCustomer.getZip() << std::endl;
	std::cout << "His phone number is " << preferredCustomer.getPhone() << std::endl;
	std::cout << "His customer number is " << preferredCustomer.getCustomerNumber() << std::endl;
	if (preferredCustomer.getMailingList()) {
		std::cout << "He is on the mailing list." << std::endl;
	}
	else {
		std::cout << "He is not on the mailing list." << std::endl;
	}
	std::cout << "He has purchased $" << preferredCustomer.getPurchaseAmount() << " worth of goods." << std::endl;
	std::cout << "His discount level is " << preferredCustomer.getDiscountLevel() * 100 << " percent." << std::endl;
	std::cout << std::endl;

	char key;
	std::cout << "Enter any key to exit." << std::endl;
	std::cin >> key;
	return 0;
}