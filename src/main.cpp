//============================================================================
// Name        : main.cpp
// Author      : Chewbacca
// Version     :oh member chewbacca? oh i member
// Copyright   : Your copyright notice
// Description : Member when there weren’t so many Mehicans? Meeember?
//============================================================================

#include <iostream>
#include "Piscina.h"
#include "Pessoa.h"
#include "Utente.h"
#include "Professor.h"
using namespace std;

int main() {
	//Piscinas
	Piscina piscina1("Piscina da Retrete1", 50);
	Piscina piscina2("Piscina da Retrete2", 159);

	//Clientes
	Pessoa *pessoa1 = new Utente("OhDomPiano");
	Pessoa *pessoa2 = new Utente("OhLongJhonson");
	Pessoa *pessoa3 = new Utente("Towelie");

	//Professores
	Pessoa *professor1 = new Professor("Taveira");
	Pessoa *professor2 = new Professor("Angelico");
	Pessoa *professor3 = new Professor("Beterraba");

	//Adiciona Clientes
	piscina1.addClientes(pessoa1);
	piscina2.addClientes(pessoa2);
	piscina2.addClientes(pessoa3);

	//Adiciona Professores
	piscina1.addProfessores(professor1);
	piscina2.addProfessores(professor2);
	piscina2.addProfessores(professor3);

	vector<Piscina> piscinas;
	piscinas.push_back(piscina1);
	piscinas.push_back(piscina2);

	for(unsigned int k = 0; k < piscinas.size(); k++){
		cout << piscinas[k].getNome() << "\n";
		cout << "Clientes: " ;
		for(unsigned int i = 0; i < piscinas[k].getClientes().size(); i++){
			cout << piscinas[k].getClientes()[i]->getNome() << " ";
		}
		cout << "\n" << "Professores: ";
		for(unsigned int i = 0; i < piscinas[k].getProfessores().size(); i++){
					cout << piscinas[k].getProfessores()[i]->getNome() << " ";
		}
		cout << "\n\n";
	}
	return 0;
}
