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

	Data();
	Data(int h, int m);
	Data(std::string s);
	std::string toString();
	int getMes()const;
	int getAno()const;
	int getHora()const;
	int getMinuto() const;
	bool isValid();
	friend std::ostream& operator<<(std::ostream& os, const Data& d);
};

