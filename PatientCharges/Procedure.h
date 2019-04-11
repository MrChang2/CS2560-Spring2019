/**
* @file
* @brief Header file setting up Procedure class. Stores all relevant information for Procedure
*/
#pragma once
#include <string>
using namespace std;
class Procedure
{
private:
	string name;	/**Stores name of Procedure*/
	string date; /**Stores the date of Procedure*/
	string practitioner; /**Stores the name of the practitioner for Procedure*/
	double charge; /**Stores the cost of the procedure*/
public:
	Procedure(); /**Default constructor for Procedure*/
	Procedure(string n, string d, string p, double c); /**Main constructor for Procedure*/
	~Procedure(); /**Default destructor for Procedure*/
	void setName(string n); /**Setter for name*/
	string getName(); /**Getter for name*/
	void setDate(string n); /**Setter for date*/
	string getDate(); /**Getter for date*/
	void setPractitioner(string n); /**Setter for practitioner*/
	string getPractitioner(); /**Getter for practitioner*/
	void setCharge(double c); /**Setter for charge*/
	double getCharge(); /**Getter for charge*/
	void printProcedure(); /**Method to print all the Procedure information*/
	double operator+(Procedure p); /**Operator modification for add procedure costs*/
};

