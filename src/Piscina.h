#pragma once

#include <vector>
#include <string>

#include "Pessoa.h"


class Piscina{
	vector<Pessoa * > clientes;
	vector<Pessoa *> professores;
	int capacidade, numClientesAula;

	string nome;
public:
	Piscina(string nome, int capacidade);
	~Piscina();

	string getNome() const;

	vector<Pessoa* > getClientes() const;
	void addClientes(Pessoa *cliente);
	vector<Pessoa* > getProfessores() const;
	void addProfessores(Pessoa *professor);
};
