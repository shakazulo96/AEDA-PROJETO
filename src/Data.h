#pragma once

#include <string>
#include <sstream>

class Data
{
private:
	int dia;
	int mes;
	int ano;
	int hora;
	int minuto;
	bool valid;

public:

	// Constructors

	Data();

	Data(int d, int m, int a);

	Data(int d, int m, int a, int h, int n);

	Data(std::string s);

	//Gets

	int getDia();
	int getMes();
	int getAno();
	int getHora();
	int getMinuto();
	bool isValid();
	std::string toString();

	//Sets

	void setDia(int d);
	void setMes(int m);
	void setAno(int a);
	void setHora(int h);
	void setMinuto(int n);

	 //Operator Overloading
	friend std::ostream& operator<<(std::ostream& os, const Data& d);  
};
