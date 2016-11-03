#include "Data.h"

#include <sstream>

using namespace std;

// Constructors

Data::Data() { dia = 1; mes = 1; ano = 1; valid = true; }

Data::Data(int d, int m, int a)
{
	dia = d;
	mes = m;
	ano = a;
	valid = true;

	isValid();
}

Data::Data(string s)
{
	char ignore;
	stringstream ss;

	ss << s;
	ss >> dia;
	ss >> ignore;
	ss >> mes;
	ss >> ignore;
	ss >> ano;

	valid = isValid();
}

string Data::toString()
{
	stringstream ss;
	ss << dia << "/" << mes << "/" << ano;
	return ss.str();
}

//Gets

int Data::getDia()
{
	return dia;
}

int Data::getMes()
{
	return mes;
}

int Data::getAno()
{
	return ano;
}

bool Data::isValid()
{
	if ((dia < 1) || (dia > 31))
		return false;
	if ((mes < 1) || (mes > 12))
		return false;
	if (ano < 1)
		return false;

	return true;
}

//Sets

void Data::setDia(int d)
{
	dia = d;
	valid = isValid();
}

void Data::setMes(int m)
{
	mes = m;
	valid = isValid();
}

void Data::setAno(int a)
{
	ano = a;
	valid = isValid();
}

/* EXPERIMENTAL - Operator Overloading
std::ostream& operator<<(std::ostream& os, const Data& d)
{
	os << d.dia << "/" << d.mes << "/" << d.ano;
	return os;
}*/