#include "Data.h"

using namespace std;

// Constructors

Data::Data() { dia = 1; mes = 1; ano = 1; hora = 00; minuto = 00; valid = true; }

Data::Data(int d, int m, int a)
{
	dia = d;
	mes = m;
	ano = a;
	valid = true;

	isValid();
}

Data::Data(int d, int m, int a, int h, int n)
{
	dia = d;
	mes = m;
	ano = a;
	hora = h;
	minuto = n;
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
	ss >> ignore;
	ss >> hora;
	ss >> ignore;
	ss >> minuto;

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

int Data::getHora()
{
	return hora;
}

int Data::getMinuto()
{
	return minuto;
}



bool Data::isValid()
{
	if ((dia < 1) || (dia > 31))
		return false;
	if ((mes < 1) || (mes > 12))
		return false;
	if (ano < 1)
		return false;
	if ((hora < 0) || (hora > 23))
		return false;
	if ((minuto < 0) || (minuto > 59))
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

void Data::setHora(int h)
{
	hora = h;
	valid = isValid();
}

void Data::setMinuto(int n)
{
	minuto = n;
	valid = isValid();
}

  // Operator Overloading
std::ostream& operator<<(std::ostream& os, const Data& d)
{
	os << d.dia << "/" << d.mes << "/" << d.ano;
	return os;
}