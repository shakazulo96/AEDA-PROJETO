#include "Professor.h"
using namespace std;

Professor::Professor(int ID, string nome, Data adesao):Pessoa(ID, nome, adesao){}


string Professor::toString()
{
	stringstream ss;
	ss << getID() << " ; " << getNome() << " ; " << getAdesao().toString() << " ; ";
	return ss.str();
}

