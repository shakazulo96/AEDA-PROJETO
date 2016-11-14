#pragma once

#include <vector>
#include "Professor.h"
#include "Utente.h"


class Piscina {
	//  experiencia
	std::vector<Utente> utentes;
	std::vector<Professor> professoress;

	//


	vector<Pessoa * > clientes;
	vector<Pessoa *> professores;
	int capacidade, numClientesAula;
	string nome;
public:
	Piscina(string nome, int capacidade);
	Piscina();

	string getNome() const;

	vector<Pessoa* > getClientes() const;
	void addClientes(Pessoa *cliente);
	vector<Pessoa* > getProfessores() const;
	void addProfessores(Pessoa *professor);

	//

	vector<Utente> getUtentes();


	vector<Professor> getProfessores();


	vector<int> getIDs();

	bool Piscina::idExiste(int id);

	void Piscina::insertUtente(Utente c);

	void Piscina::insertProfessor(Professor c);

	void Piscina::removeUtente(int id);

	void Piscina::removeProfessor(int id);

	void Piscina::sortUtentesPerName();

	void Piscina::printUtentes();

	void Piscina::sortProfessoresPerName();

	void Piscina::printProfessores();
};
//