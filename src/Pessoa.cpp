#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa() {}
Pessoa::Pessoa(string nome){
	this->nome = nome;
}
string Pessoa::getNome() const{
	return nome;
}
void Pessoa::setNome(string nome){
	this->nome = nome;
}

