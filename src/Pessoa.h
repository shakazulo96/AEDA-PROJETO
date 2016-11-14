#pragma once

using namespace std;

#include "utils.h"

class Pessoa{
	int ID;
	string nome;
	vector<Data> horario;
	Data adesao;
public:
	Pessoa();
	Pessoa(string nome);
	Pessoa(int id, string n,Data d);

	string getNome() const;
	int getID();
	Data Pessoa::getData();

	void setNome(string nome);
};
