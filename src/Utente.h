#pragma once

#include "Pessoa.h"
#include "Data.h"

using namespace std;

class Utente : public Pessoa{
	// int numerosessoes30min
	
public:
	Utente();
	Utente(string nome);
	Utente(int id, string n, Data d);
	
};
