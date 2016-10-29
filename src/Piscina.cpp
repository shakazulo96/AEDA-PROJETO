#pragma once

#include "Piscina.h"

Piscina::Piscina(){}
Piscina::~Piscina(){}

//Clientes
Utente Piscina::getClientes() const{
	return clientes;
}
void Piscina::addClientes(Utente *cliente){
	clientes.push_back(cliente);
}
//Professores
Professor Piscina::getProfessores() const{
	return professores;
}
void Piscina::addProfessores(Professor *professor){
	professores.push_back(professor);
}
