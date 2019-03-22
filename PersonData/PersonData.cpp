#include "PersonData.h"



PersonData::PersonData()
{
}
PersonData::PersonData(std::string ln, std::string fn, std::string a, std::string c, std::string s, std::string z, std::string p) {
	lastName = ln;
	firstName = fn;
	address = a;
	city = c;
	state = s;
	zip = z;
	phone = p;
}

PersonData::~PersonData()
{
}

void PersonData::setLastName(std::string s) {
	lastName = s;
}
std::string PersonData::getLastName() {
	return lastName;
}
void PersonData::setFirstName(std::string s) {
	firstName = s;
}
std::string PersonData::getFirstName() {
	return firstName;
}
void PersonData::setAddress(std::string s) {
	address = s;
}
std::string PersonData::getAddress() {
	return address;
}
void PersonData::setCity(std::string s) {
	city = s;
}
std::string PersonData::getCity() {
	return city;
}
void PersonData::setState(std::string s) {
	state = s;
}
std::string PersonData::getState() {
	return state;
}
void PersonData::setZip(std::string s) {
	zip = s;
}
std::string PersonData::getZip() {
	return zip;
}
void PersonData::setPhone(std::string s) {
	phone = s;
}
std::string PersonData::getPhone() {
	return phone;
}