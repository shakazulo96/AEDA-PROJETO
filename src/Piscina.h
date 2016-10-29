#pragma once

#include <vector>

#include "Utente.h"
#include "Professor.h"

using namespace std;

class Piscina{
	vector<Utente * > clientes;
	vector<Professor *> professores;
public:
	Piscina();
	~Piscina();

	Utente getClientes() const;
	void addClientes(Utente *cliente);
	Professor getProfessores() const;
	void addProfessores(Professor *professor);
};
