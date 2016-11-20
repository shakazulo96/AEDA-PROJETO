#pragma once

#include <vector>
#include <string>
#include <iostream>
#include "Aula.h"

class Pessoa{
	std::string nome;
	std::vector<Data *> horario;
	std::vector<Aula *> aulas;
	int ID;
	Data adesao;
public:
	Pessoa(int ID, std::string nome, Data adesao);

	std::string getNome() const;
	Data getAdesao();
	void setNome(std::string nome);
	std::vector<Data* > getHorario() const;
	void setHorario(Data* data);
	std::vector<Aula *> getAulas();
	void addAula(Aula *aula);
	friend std::ostream& operator<< (std::ostream &out,  Pessoa *p);

	int getID()const;
};
