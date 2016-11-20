#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Aula.h"
#include "Pessoa.h"
#include "Utente.h"
#include "Professor.h"
#include "Data.h"


class Piscina{
	std::vector<Aula *> aulas;
	std::vector<Utente *> clientes;
	std::vector<Pessoa *> naPiscina;
	std::vector<Professor *> professores;
	unsigned int capacidade;
	
	

	std::string nome;
public:
	Piscina(std::string nome, int capacidade);
	Piscina();

	std::string getNome() const;

	std::vector<Utente* > getClientes() const;
	void addClientes(Utente *cliente);


	int eCliente(Pessoa *cliente);
	int estaNaPiscina(Pessoa *cliente);
	bool podeEntrar(Utente *cliente, Data *data);

	std::vector<Professor * > getProfessores() const;
	void addProfessores(Professor *professor);

	void diferencaSaldo(Utente *c, int conta, int preco);

	float valorAPagar(Pessoa *cliente, int ano, int mes);

	bool sairPiscina(Pessoa *cliente);

	std::vector<Aula* > getAulas() const;
	void addAulas(Aula *aula);

	int numAulasSemProfessor() const;

	bool existeID(int ID);

	void removeCliente(int ID);
	void removeProfessor(int ID);

	int atribuiAulas();

	void printAulas();

//	void sortUtentesPerName();

	void printUtentes();

//	void sortProfessoresPerName();

	void printProfessores();
};
