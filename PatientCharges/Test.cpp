/**
* @file
* @author Matthew Chang
* @date 4/10/19
*
* @brief Program simulates the storage of information regarding a patient and medical procedures performed on them.
*/
#include "Patient.h"
#include "Procedure.h"
#include <iostream>

int main() {
	Patient patient("Billy", "Joe", "McGuffy", "12345 Grove Street", "Los Santos", "California", "90253", "737-424-8912", "Big Smoke", "737-239-1295");
	Procedure p1("Physical Exam", "3/13/2019", "Dr. Irvine", 250);
	Procedure p2("X-ray", "3/13/2019", "Dr. Jamison", 500);
	Procedure p3("Blood Test", "3/13/2019", "Dr. Smith", 200);

	cout << "Patient Information" << endl;
	cout << "-------------------" << endl;
	cout << "Name: " << patient.getName() << " " << patient.getMiddleName() << " " << patient.getLastName() << endl;
	cout << "Address: " << patient.getAddress() << endl;
	cout << "City: " << patient.getCity() << endl;
	cout << "Zip: " << patient.getZip() << endl;
	cout << "Phone Number: " << patient.getPhoneNumber() << endl;
	cout << "Emergency Contact Name: " << patient.getEmergencyName() << endl;
	cout << "Emergency Contact Number: " << patient.getEmergencyNumber() << endl;

	cout << endl;

	cout << "Procedure 1" << endl;
	cout << "-----------" << endl;
	p1.printProcedure();

	cout << endl;

	cout << "Procedure 2" << endl;
	cout << "-----------" << endl;
	p2.printProcedure();

	cout << endl;

	cout << "Procedure 3" << endl;
	cout << "-----------" << endl;
	p3.printProcedure();

	cout << endl;

	double totalCharge = (p1 + p2) + (p2 + p3) - p2.getCharge();
	cout << "Total Charge: $" << totalCharge << endl;
	char done;
	cout << "Enter any key to quit." << endl;
	cin >> done;
	return 0;
}
