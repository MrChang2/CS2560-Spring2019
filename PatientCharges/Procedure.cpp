/**
* @file
* @brief Main program for Procedure class
*/
#include "Procedure.h"
#include <iostream>
using namespace std;

/**
* @brief Default constructor for Procedure. Undefined as is it unused.
*/
Procedure::Procedure()
{
}
/**
* @brief Main constructor for Procedure. Takes in all parameters and assigns them appropriately to the private variables.
*/
Procedure::Procedure(string n, string d, string p, double c) {
	name = n;
	date = d;
	practitioner = p;
	charge = c;
}
/**
* @brief Destructor for Procedure. Unused
*/
Procedure::~Procedure()
{
}
/**
* @brief Assigns parameter string n to name
*/
void Procedure::setName(string n) {
	name = n;
}
/**
* @brief Returns the private string name
*/
string Procedure::getName() {
	return name;
}
/**
* @brief Assigns the string n to date
*/
void Procedure::setDate(string n) {
	date = n;
}
/**
* @brief Returns the private string date
*/
string Procedure::getDate() {
	return date;
}
/**
* @brief Assigns the string n to practitioner
*/
void Procedure::setPractitioner(string n) {
	practitioner = n;
}
/**
* @brief Returns the private string practitioner
*/
string Procedure::getPractitioner() {
	return practitioner;
}
/**
* @brief Assigns double c to charge
*/
void Procedure::setCharge(double c) {
	charge = c;
}
/**
* @brief Returns the private double charge
*/
double Procedure::getCharge() {
	return charge;
}
/**
* @brief Prints out all information for Procedure
*/
void Procedure::printProcedure() {
	cout << "Procedure Name: " << name << endl;
	cout << "Date: " << date << endl;
	cout << "Practitioner: " << practitioner << endl;
	cout << "Charge: $" << charge << endl;
}
/**
* @brief Adds and returns the sum of the charges between this Procedure and Procedure p
*/
double Procedure::operator+(Procedure p) {
	return charge + p.charge;
}
