// Employee.cpp

#include<iostream>
#include<string>

using namespace::std;

#include"Employee.h"

Employee::Employee() 
{

	this->Name = " ";
	this->IdNumber = 0;
	this->Department = " ";
	this->Position = " ";

}

Employee::Employee(string aName, int aIdNumber, string aDepartment, string aPosition) {

	this->Name = aName;
	this->IdNumber = aIdNumber;
	this->Department = aDepartment;
	this->Position = aPosition;
}

Employee::Employee(string aName, int aIdNumber)
{
	this->Name = aName;
	this->IdNumber = aIdNumber;
	this->Department = " ";
	this->Position = " ";
}

void Employee::setName(string n) {

	(*this).Name = n;
}

void Employee::setId(int i) {

	(*this).IdNumber = i;
}

void Employee::setDepartment(string d) {

	(*this).Department = d;
}

void Employee::setPosition(string p) {

	(*this).Position = p;
}

string Employee::getName()const {

	return this->Name;

}

int Employee::getIdNumber()const {

	return this->IdNumber;

}

string Employee::getDepartment() const {

	return this->Department;
}

string Employee::getPosition() const {

	return this->Position;

}

int Employee::getCount(int count = 0) {

	return count;

}

void Employee::displayEmployee()const {

	cout << getName() << endl;
	cout << "\t\t" << getIdNumber();
	cout << "\t\t" << getDepartment();
	cout << "\t\t" << getPosition() << endl;

}

Employee::~Employee() {

	cout << "Destroying Object\n";
}