#include "Pessoa.h"

using namespace std;


//  Constructors

Pessoa::Pessoa() {}

Pessoa::Pessoa(int id, string n,Data d) {
	ID = id;
	nome = n;
	adesao = d;
}

Pessoa::Pessoa(string nome){
	this->nome = nome;
}

//   Gets

string Pessoa::getNome() const{
	return nome;
}

int Pessoa::getID()
{
	return ID;
}

Data Pessoa::getData()
{
	return adesao;
}


//   Sets

void Pessoa::setNome(string nome){
	this->nome = nome;
}

