#include "Piscina.h"
#include "Utente.h"
#include "Professor.h"
//#include <algorithm>
#include <iostream>
//#include <set>
//#include <map>
using namespace std;

Piscina::Piscina(string nome, int capacidade){
	this->nome = nome;
	this->capacidade = capacidade;
	naPiscina.clear();
	clientes.clear();
	professores.clear();

}

Piscina::Piscina(){capacidade = 100;}

string Piscina::getNome() const{
	return nome;
}

vector<Utente*> Piscina::getClientes() const{
	return clientes;
}
void Piscina::addClientes(Utente *cliente){
	clientes.push_back(cliente);
}


std::vector<Aula* > Piscina::getAulas() const{
	return aulas;
}
void Piscina::addAulas(Aula *aula){
	aulas.push_back(aula);
}

vector<Professor *> Piscina::getProfessores() const{
	return professores;
}
void Piscina::addProfessores(Professor *professor){
	professores.push_back(professor);
}
int Piscina::eCliente(Pessoa *cliente){
	for(unsigned int i = 0; i < clientes.size(); i++){
		//Meter id em static
		if(cliente->getNome() == clientes[i]->getNome()) return i;
	}
	return -1;
}

bool Piscina::podeEntrar(Utente *cliente, Data *data){
//	if(eCliente(cliente) == -1) return false;
//	if(capacidade > naPiscina.size()){
//		clientes[eCliente(cliente)]->setHorario(data);
//		naPiscina.push_back(cliente);
//		return true;
//	}
	unsigned int naPiscina = 0;
	for(unsigned int i = 0; i < clientes.size(); i++){
		for(unsigned int j = 0; j < clientes[i]->getHorario().size(); j++){
			if(clientes[i]->getHorario()[j]->getAno() == data->getAno())
				if(clientes[i]->getHorario()[j]->getMes() == data->getMes())
					if(clientes[i]->getHorario()[j]->getDia() == data->getDia())
						if(clientes[i]->getHorario()[j]->getHora() == data->getHora()){
							naPiscina++;
						}
		}
		for(unsigned int j = 0; j < clientes[i]->getAulas().size(); j++){
			if(clientes[i]->getAulas()[j]->getHorario()[0]->getAno() == data->getAno())
				if(clientes[i]->getAulas()[j]->getHorario()[0]->getMes() == data->getMes())
					if(clientes[i]->getAulas()[j]->getHorario()[0]->getDia() == data->getDia())
						if(clientes[i]->getAulas()[j]->getHorario()[0]->getHora() == data->getHora()){
							naPiscina++;
						}
		}

	}
	if(naPiscina >= capacidade) return false;

	return true;
}

void Piscina::diferencaSaldo(Utente *c,int conta, int preco) {
	int balance;
	balance = conta - preco;
	c->setSaldo(balance);
}

float Piscina::valorAPagar(Pessoa *cliente, int ano, int mes){
	float somador = 0;
	if(eCliente(cliente) == -1) return -1;
	int pos = eCliente(cliente);
	if(!cliente[pos].getHorario().empty()){
		for(unsigned int i = 0; i < cliente[pos].getHorario().size(); i++){
			//if(cliente[pos].getHorario()[i]->getAno() == ano && cliente[pos].getHorario()[i]->getMes() == mes){
			//	somador += 2; //2 a declarar como variavel global
			//}
		}
		//falta a parte das aulas
	}
	return somador;
}

bool Piscina::sairPiscina(Pessoa *cliente){
	if(eCliente(cliente) == -1) return false;
	if(estaNaPiscina(cliente) == -1) return false;
	if(!cliente[eCliente(cliente)].getHorario().empty()){
	naPiscina.erase(naPiscina.begin() + estaNaPiscina(cliente));

	}
	return true;
}

int Piscina::estaNaPiscina(Pessoa *cliente){
	if(eCliente(cliente) == -1) return false;
	for(unsigned int i = 0; i < naPiscina.size(); i++){
		//Meter id em static, comparar o nome é meio merda
		if(cliente->getNome() == naPiscina[i]->getNome()) return i;
	}
	return -1;
}

int Piscina::numAulasSemProfessor() const{
	if(!aulas.empty()){
		int somador = aulas.size();
		for(unsigned int i = 0; i < aulas.size();i++){
			for(unsigned int j = 0; j < professores.size(); j++){
				for(unsigned int k = 0; k < professores[j]->getAulas().size(); k++){
					if(aulas[i]->getId() == professores[j]->getAulas()[k]->getId()){
						somador--;
					}
				}
			}
		}
		return somador;
	}
	return 0;
}

bool Piscina::existeID(int ID){
	for(unsigned int i = 0; i < clientes.size(); i++){
		if(clientes[i]->getID() == ID){
			return true;
		}
	}
	return false;
}

void Piscina::removeCliente(int ID){
	for (unsigned int i = 0; i < clientes.size(); i++)
		{
			if (clientes[i]->getID() == ID)
				clientes.erase(clientes.begin() + i);
		}
}
void Piscina::removeProfessor(int ID){
	for (unsigned int i = 0; i < professores.size(); i++)
		{
			if (professores[i]->getID() == ID)
				professores.erase(professores.begin() + i);
		}
}




bool sortUName(Utente a, Utente b)
{
	return a.getNome() < b.getNome();
}

void Piscina::printAulas()
{
    for(unsigned int i = 0; i< aulas.size();i++)
    {
	cout << aulas[i] << endl << endl;
    }
}




void Piscina::printUtentes()
{
	for (unsigned int i = 0; i < clientes.size(); i++)
	{
		cout << clientes[i] << endl << endl;
	}
}
void Piscina::printProfessores()
{
	for (unsigned int i = 0; i < professores.size(); i++)
	{
		cout << professores[i] << endl << endl;
	}
}

int Piscina::atribuiAulas(){
	unsigned int numeroDeAulas = 0;
	int somador = 0;
	if(aulas.empty()) return 0;
	if(!professores.empty()){
		for(unsigned int k = 0; k < 10; k++){
			for(unsigned int i = 0; i < professores.size(); i++){
				if (professores[i]->getAulas().size() == numeroDeAulas){
					for(unsigned int j = 0; j < aulas.size(); j++){
						////////////////////////////////////////////////////////
						//falta ver se o professor já tem algma aula nesse horario
						///////////////////////////////////////////////////////
						if(aulas[j]->temProfessor() == false){
							professores[i]->addAula(aulas[j]);
							aulas[j]->setTemProfessor();
						}
					}

				}
			}
		numeroDeAulas++;
		}
	}
		 //número de aulas que ficaram sem professor //supondo que cada professor tem no maximo 10 aulas
	if(!aulas.empty()){
		for(unsigned int i = 0; i < aulas.size(); i++){
			if(aulas[i]->temProfessor() == false) somador++;
		}
	}

	return somador;
}
//bool sortPName(Professor a, Professor b)
//{
//	return a.getNome() < b.getNome();
//}

//void Piscina::sortProfessoresPerName()
//{
//	sort(professores.begin() + 4, professores.end(), sortPName);
//}

//void Piscina::sortUtentesPerName()
//{
//	sort(clientes.begin() + 4, clientes.end(), sortUName);
//}
//ostream& operator<<(ostream& os, const Pessoa& p)
//{
//	os << p.getID() << " " << p.getNome(); //<< p.getData
//	return os;
//}




