#include "Pessoa.h"

using namespace std;


//  Constructors

Pessoa::Pessoa() {}

Pessoa::Pessoa(string nome){
	this->nome = nome;
}

//   Gets

string Pessoa::getNome() const{
	return nome;
}


//   Sets

void Pessoa::setNome(string nome){
	this->nome = nome;
}

