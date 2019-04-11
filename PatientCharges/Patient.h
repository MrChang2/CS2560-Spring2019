/**
* @file
* @brief Header file for the Patient class. Stores all relevant information regarding patient
*/
#pragma once
#include <string>
using namespace std;

class Patient
{
private:
	string name; /**Stores first name of Patient*/
	string middleName; /**Stores the middle name of Patient*/
	string lastName; /**Stores the last name of Patient*/
	string address; /**Stores the home address of Patient*/
	string city; /**Stores the home city of Patient*/
	string state; /**Stores the home state of Patient*/
	string zip; /**Stores the ZIP code of Patient*/
	string phoneNumber; /**Stores the phone number of Patient*/
	string emergencyName; /**Stores the name of Patient's emergency contact*/ 
	string emergencyNumber; /**Stores the phone number of Patient's emergency contact*/
public:
	Patient();	/**Default constructor. Not used.*/
	Patient(string n, string mn, string ln, string a, string c, string s, string z, string p, string ename, string enumber); /**Main constructor. Takes in all relevant information.*/
	~Patient(); /**Destructor*/
	void setName(string n); /**Setter for name*/
	string getName(); /**Getter for name*/
	void setMiddleName(string n); /**Setter for middleName*/
	string getMiddleName(); /**Getter for middleName*/
	void setLastName(string n); /**Setter for lastName*/
	string getLastName(); /**Getter for lastName*/
	void setAddress(string n); /**Setter for address*/
	string getAddress(); /**Getter for address*/
	void setCity(string n); /**Setter for city*/
	string getCity(); /**Getter for city*/
	void setState(string n);/**Setter for state*/
	string getState(); /**Getter for state*/
	void setZip(string n); /**Setter for zip*/
	string getZip(); /**Getter for zip*/
	void setPhoneNumber(string n); /**Setter for phone*/
	string getPhoneNumber(); /**Getter for phone*/
	void setEmergencyName(string n); /**Setter for emergencyName*/
	string getEmergencyName(); /**Getter for emergencyName*/
	void setEmergencyNumber(string n); /**Setter for emergencyNumber*/
	string getEmergencyNumber(); /**Getter for emergencyNumber*/
};
