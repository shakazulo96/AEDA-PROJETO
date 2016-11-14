#include "Piscina.h"
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

Piscina::Piscina(string nome, int capacidade){
	this->nome = nome;
	this->capacidade = capacidade;
	numClientesAula = 0;
}
Piscina::Piscina(){}

//
string Piscina::getNome() const{
	return nome;
}

vector<Utente> Piscina::getUtentes()
{
	return utentes;
}

vector<Professor> Piscina::getProfessores()
{
	return professoress;
}



//

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

bool Piscina::idExiste(int id)
{
	for (unsigned int i = 0; i < utentes.size(); i++)
		if (utentes[i].getID() == id)
			for (unsigned int j = 0; j < professoress.size(); j++)
		if (professoress[j].getID() == id)
			return true;

	
	return false;
}

void Piscina::insertUtente(Utente c)
{
	utentes.push_back(c);
}

void Piscina::insertProfessor(Professor c)
{
	professoress.push_back(c);
}

void Piscina::removeUtente(int id)
{
	for (unsigned int i = 0; i < utentes.size(); i++)
	{
		if (utentes[i].getID() == id)
			utentes.erase(utentes.begin() + i);
	}
}

void Piscina::removeProfessor(int id)
{
	for (unsigned int i = 0; i < professoress.size(); i++)
	{
		if (professoress[i].getID() == id)
			professoress.erase(professoress.begin() + i);
	}
}

bool sortUName(Utente a, Utente b)
{
	return a.getNome() < b.getNome();
}

void Piscina::sortUtentesPerName()
{
	sort(utentes.begin() + 4, utentes.end(), sortUName);
}

void Piscina::printUtentes()
{
	for (unsigned int i = 0; i < utentes.size(); i++)
	{
		cout << utentes[i] << endl << endl;
	}
}

bool sortPName(Professor a, Professor b)
{
	return a.getNome() < b.getNome();
}

void Piscina::sortProfessoresPerName()
{
	sort(professoress.begin() + 4, professoress.end(), sortPName);
}

void Piscina::printProfessores()
{
	for (unsigned int i = 0; i < utentes.size(); i++)
	{
		cout << professoress[i] << endl << endl;
	}
}

// Operator Overloading
ostream& operator<<(ostream& os, const Utente& p)
{
	os << p.getID << " " << p.getNome << " " << p.getData;
	return os;
}


// Operator Overloading
ostream& operator<<(ostream& os, const Professor& p)
{
	os << p.getID << " " << p.getNome << " " << p.getData;
	return os;
}

//overload sort
