#pragma once

#include <string>
#include <sstream>

class Data
{
private:
	int dia;
	int mes;
	int ano;
	bool valid;

public:

	// Constructors

	Data();

	Data(int d, int m, int a);

	Data(std::string s);

	//Gets

	int getDia();
	int getMes();
	int getAno();
	bool isValid();
	std::string toString();

	//Sets

	void setDia(int d);
	void setMes(int m);
	void setAno(int a);

	 /*Operator Overloading
	friend std::ostream& operator<<(std::ostream& os, const Data& d);  */
};
