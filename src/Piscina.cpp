#include "Piscina.h"
using namespace std;

Piscina::Piscina(string nome, int capacidade){
	this->nome = nome;
	this->capacidade = capacidade;
	numClientesAula = 0;
}
Piscina::~Piscina(){}


string Piscina::getNome() const{
	return nome;
}
//Clientes
vector<Pessoa*> Piscina::getClientes() const{
	return clientes;
}
void Piscina::addClientes(Pessoa *cliente){
	clientes.push_back(cliente);
}
//Professores
vector<Pessoa*> Piscina::getProfessores() const{
	return professores;
}
void Piscina::addProfessores(Pessoa *professor){
	professores.push_back(professor);
}
