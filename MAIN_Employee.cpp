// MAIN_Employee.cpp

#include<iostream>
#include<string>
#include<iomanip>

using namespace::std;

#include"Employee.h"


int main() {

	Employee E1("\nSusan Meyers", 47899, "Accounting", "Vice President");
	Employee E2("\nMark Jones", 39119), E3;
	E2.setDepartment("IT");
	E2.setPosition("\tProgrammer");

	E3.setName("\nJoy Rogers");
	E3.setId(81774);
	E3.setDepartment("Manufacturing");
	E3.setPosition("Engineer");

	cout << "_____________________________________________________________________" << endl;
	cout << " Name\t\tID Number\tDepartment\t\tPosition" << endl;
	cout << "_____________________________________________________________________" << endl;
	E1.displayEmployee();
	E2.displayEmployee();
	E3.displayEmployee();
	cout << "______________________________________________________________________" << endl;


	system("pause");
	return 0;

}// end main. 25 de marzo de 2017 - Successful!

/*Output: 

_____________________________________________________________________
Name           ID Number       Department              Position
_____________________________________________________________________

Susan Meyers
				47899           Accounting              Vice President

Mark Jones
				39119           IT                      Programmer

Joy Rogers
				81774           Manufacturing           Engineer
______________________________________________________________________
Press any key to continue . . .*/