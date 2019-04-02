#pragma once
#include "Employee.h"
class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyPayRate;
public:
	ProductionWorker();
	ProductionWorker(std::string n, int num, std::string d, int s, double h);
	~ProductionWorker();
	void setShift(int s);
	int getShift();
	void setHourlyPayRate(double d);
	double getHourlyPayRate();
};
class InvalidShift : std::exception {
	const char * msg = "Invalid Shift number";
	public:
		InvalidShift() {}
		virtual const char * what() const throw() { return msg; }
};
class InvalidPayRate : std::exception {
	const char * msg = "Invalid pay rate";
	public:
		InvalidPayRate() {}
		virtual const char * what() const throw() { return msg; }
};

