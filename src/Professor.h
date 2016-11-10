#pragma once
#include "Pessoa.h"

using namespace std;

class Professor : public Pessoa
{
private:
	vector<Data> Horario;

public:
	Professor();
	Professor(string nome);

};
