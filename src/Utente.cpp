#include "Utente.h"
using namespace std;

Utente::Utente(int ID, string nome, Data adesao,int saldo):Pessoa(ID, nome, adesao){
	this->saldo = saldo;
}

string Utente::toString()
{
	stringstream ss;
	ss << getID() << " ; " << getNome() << " ; " << getAdesao().toString() << " ; " << saldo;
	return ss.str();
}

int Utente::getSaldo() {
	return saldo;
}

void Utente::setSaldo(int s) {
	saldo = s;
}

std::ostream& operator<< (std::ostream &out, Utente *c)
{
	out << c->getID() << " ; " << c->getNome() << " ; " << c->getAdesao().toString() << " ; "<< c->getSaldo();

	return out;
}