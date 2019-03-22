#pragma once
#include <string>
class PersonData
{
	std::string lastName;
	std::string firstName;
	std::string address;
	std::string city;
	std::string state;
	std::string zip;
	std::string phone;
public:
	PersonData();
	PersonData(std::string ln, std::string fn, std::string a, std::string c, std::string s, std::string z, std::string p);
	~PersonData();
	void setLastName(std::string s);
	std::string getLastName();
	void setFirstName(std::string s);
	std::string getFirstName();
	void setAddress(std::string s);
	std::string getAddress();
	void setCity(std::string s);
	std::string getCity();
	void setState(std::string s);
	std::string getState();
	void setZip(std::string s);
	std::string getZip();
	void setPhone(std::string s);
	std::string getPhone();
};
