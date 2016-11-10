#pragma once

using namespace std;

#include "utils.h"

class Pessoa{
	int ID;
	string nome;
	vector<Data> horario;
public:
	Pessoa();
	Pessoa(string nome);

	string getNome() const;

	void setNome(string nome);
};
