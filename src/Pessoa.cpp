#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(int ID, string nome, Data adesao){
	this->nome = nome;
	this->ID = ID;
	this->adesao = adesao;
	aulas.clear();

}

Data Pessoa::getAdesao() {
	return adesao;
}
string Pessoa::getNome() const{
	return nome;
}
void Pessoa::setNome(string nome){
	this->nome = nome;
}

vector<Data* > Pessoa::getHorario() const{
	return horario;
}
void Pessoa::setHorario(Data* data){
	horario.push_back(data);
}
vector<Aula* > Pessoa::getAulas(){
	return aulas;
}
int Pessoa::getID() const{
	return ID;
}

std::ostream& operator<< (std::ostream &out,  Pessoa *p)
{
	out << p->getID() << " ; " << p->getNome() << " ; " << p->getAdesao().toString() << " ; " ;

    return out;
}


void Pessoa::addAula(Aula * aula){
	aulas.push_back(aula);
}





