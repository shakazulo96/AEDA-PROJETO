#include "Data.h"
using namespace std;

//Data::Data(int ano, int mes, int dia, int hora, int minuto){
//	this->ano = ano;
//	this->mes = mes;
//	this->dia = dia;
//	this->hora = hora;
//	this->minuto = minuto;
//}

Data::Data(int h, int m) {
	hora = h;
	minuto = m;

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
	ss >> ignore;

	valid = isValid();//isValid();
}
Data::Data() { dia = 1; mes = 1; ano = 1; hora = 00; minuto = 00; valid = true; }

string Data::toString()
{
	stringstream ss;
	ss << dia << "/" << mes << "/" << ano<<"-"<< hora<<":"<< minuto;
	return ss.str();
}
int Data::getMes()const{
	return mes;
}
int Data::getAno()const{
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
	if ((hora < 8) || (hora > 18))
		return false;
	if ((minuto < 0) || (minuto > 59))
		return false;
	return true;
}

int Data::getHora()const{
	return hora;
}
int Data::getMinuto() const{
	return minuto;
}
// Operator Overloading
std::ostream& operator<<(std::ostream& os, const Data& d)
{
	os << d.getHora() << "/" << d.getMinuto();
	return os;
}

