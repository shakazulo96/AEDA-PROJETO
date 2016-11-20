#pragma once
#include <string>
#include <sstream>

class Data
{
	int dia;
	int mes;
	int ano;
	int hora, minuto;
	bool valid;

public:
	//Data(int ano, int mes, int dia, int hora, int minuto);
	Data();
	Data(int h, int m);
	Data(std::string s);
	std::string toString();
	int getMes()const;
	int getAno()const;
	bool isValid();
	friend std::ostream& operator<<(std::ostream& os, const Data& d);
};

