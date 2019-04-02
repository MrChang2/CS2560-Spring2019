#include "Employee.h"


Employee::Employee()
{
}
Employee::Employee(std::string n, int num, std::string d) {
	name = n;
	number = num;
	date = d;
}
Employee::Employee(std::string n, std::string d) {
	name = n;
	date = d;
}

Employee::~Employee()
{
}

void Employee::setName(std::string n) {
	name = n;
}
std::string Employee::getName() {
	return name;
}
void Employee::setNumber(int n) {
	if (n < 0 || n>9999) {
		throw InvalidEmployeeNumber();
	}
	else {
		number = n;
	}
}
int Employee::getNumber() {
	return number;
}
void Employee::setDate(std::string d) {
	date = d;
}
std::string Employee::getDate() {
	return date;
}