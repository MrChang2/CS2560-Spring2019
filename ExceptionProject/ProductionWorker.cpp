#include "ProductionWorker.h"



ProductionWorker::ProductionWorker()
{
}
ProductionWorker::ProductionWorker(std::string n, int num, std::string d, int s, double h) {
	this->setName(n);
	this->setNumber(num);
	this->setDate(d);
	shift = s;
	hourlyPayRate = h;
}

ProductionWorker::~ProductionWorker()
{
}

void ProductionWorker::setShift(int s) {
	if (s != 1 && s != 2) {
		throw InvalidShift();
	}
	else {
		shift = s;
	}
}
int ProductionWorker::getShift() {
	return shift;
}
void ProductionWorker::setHourlyPayRate(double d) {
	if (d < 0) {
		throw InvalidPayRate();
	}
	else {
		hourlyPayRate = d;
	}
}
double ProductionWorker::getHourlyPayRate() {
	return hourlyPayRate;
}