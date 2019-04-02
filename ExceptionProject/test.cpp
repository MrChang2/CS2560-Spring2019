#include "ProductionWorker.h"
#include <iostream>

int main() {
	ProductionWorker worker("Bob", 12, "4/20/2019", 1, 15);
	std::cout << "Employee Name: " << worker.getName() << std::endl;
	std::cout << "Employee Number: " << worker.getNumber() << std::endl;
	std::cout << "Hire Date: " << worker.getDate() << std::endl;
	if (worker.getShift() == 1) {
		std::cout << "Shift: Day" << std::endl;
	}
	else {
		std::cout << "Shift: Night" << std::endl;
	}
	std::cout << "Hourly Pay Rate: $" << worker.getHourlyPayRate() << std::endl;

	std::cout << "Trying to set Employee Number to an invalid number." << std::endl;
	try {
		worker.setNumber(-1);
	}
	catch (InvalidEmployeeNumber & n) {
		std::cout << "Employee Number has to be greater than 0 and less than 10000." << std::endl;
	}
	std::cout << "Trying to set shift to an invalid input." << std::endl;
	try {
		worker.setShift(3);
	}
	catch (InvalidShift & s) {
		std::cout << "Shift number has to be either 1 or 2." << std::endl;
	}
	std::cout << "Trying to set hourly pay rate to invalid number." << std::endl;
	try {
		worker.setHourlyPayRate(-1);
	}
	catch (InvalidPayRate & h) {
		std::cout << "Hourly pay rate can't be negative." << std::endl;
	}

	char k;
	std::cout << "Enter any key to quit." << std::endl;
	std::cin >> k;
	return 0;
}