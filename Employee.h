#pragma once

// Employee.h

/*
Edwin Melendez Lopez #89139
Exercise 2 Page 802
CECS 2222 sec. 22
Prof. Claudia Talavera*/

// Pag. 802 Cap 13 Prob. 2 Version: this, UML Diagram, Static Variables and functions

// NOTE TO VIEWER: The version of this code is different from the original exercise due to the specification 
//				   of the profesor but it's still uses what the exercise asks for.

#include<iomanip>
#include<iostream>
#include<string>

using namespace::std;

class Employee
{
public:
	Employee();        // Default Constructor
	Employee(string, int, string, string);    // Parameter Constructor.
	Employee(string, int); // Copy Constructor
	~Employee();

	void setName(string);
	void setId(int);
	void setDepartment(string);
	void setPosition(string);

	string getName()const;
	string getDepartment()const;
	int getIdNumber()const;
	string getPosition()const;

	void displayEmployee()const;
	static int getCount(int);

private:
	string Name;
	int IdNumber;
	string Department;
	string Position;
	static int count;
};