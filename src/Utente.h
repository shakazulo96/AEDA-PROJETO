#pragma once
#include "Pessoa.h"
class Utente : public Pessoa{

	int saldo;
	std::vector<Data *> horario;
public:
	
	Utente(int ID, std::string nome, Data adesao,int saldo);

	std::string Utente::toString();

	int getSaldo();

	void setSaldo(int s);

    friend std::ostream& operator<< (std::ostream &out, Utente *c);
};
