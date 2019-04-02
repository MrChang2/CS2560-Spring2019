#pragma once
#include <string>
#include <exception>
class Employee
{
private:
	std::string name;
	int number;
	std::string date;
public:
	Employee();
	Employee(std::string n, int num, std::string d);
	Employee(std::string n, std::string d);
	~Employee();
	void setName(std::string n);
	std::string getName();
	void setNumber(int n);
	int getNumber();
	void setDate(std::string d);
	std::string getDate();	
};
class InvalidEmployeeNumber : public std::exception {
	const char * msg = "Invalid Employee Number";
	public:
		InvalidEmployeeNumber() {}
		InvalidEmployeeNumber(const char * s) throw() : msg(s) {}
		virtual const char * what() const throw() { return msg; }
};