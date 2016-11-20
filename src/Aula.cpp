#include "Aula.h"
using namespace std;

Aula::Aula(int id, int nMaxXlientes){
	this->id = id;
	this->nMaxClientes = nMaxXlientes;
	professor = false;

}

vector<Data* > Aula::getHorario() const{
	return horario;
}
void Aula::setHorario(Data *data){
	horario.push_back(data);
}
int Aula::getId() const{
	return id;
}

bool Aula::temProfessor() const{
	return professor;
}
void Aula::setTemProfessor(){
	if(!professor) professor = true;
	if(professor) professor = false;
}
