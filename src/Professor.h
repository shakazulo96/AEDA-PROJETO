#pragma once
#include "Pessoa.h"

class Professor : public Pessoa{

public:
	Professor(int ID, std::string nome, Data adesao);
    std::string toString();
};


