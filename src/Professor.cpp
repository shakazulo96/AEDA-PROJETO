#include "Professor.h"


using namespace std;

Professor::Professor() {}
Professor::Professor(string nome):Pessoa(nome){}
Professor::Professor(int ID, string nome, Data adesao) : Pessoa(ID, nome, adesao) {}
