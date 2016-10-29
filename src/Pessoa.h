#pragma once

using namespace std;

#include <string>

class Pessoa{
	string nome;
public:
	Pessoa();
	Pessoa(string nome);

	string getNome() const;

	void setNome();
};
