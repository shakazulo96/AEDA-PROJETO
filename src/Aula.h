#pragma once
#include <vector>
#include "Data.h"
class Aula
{
	std::vector<Data* > horario;
	int id, nMaxClientes;
	bool professor;

public:
	Aula(int id, int nMaxClientes);
	std::vector<Data* > getHorario() const;
	void setHorario(Data *data);
	int getId() const;
	bool temProfessor() const;
	void setTemProfessor();
};
