#include "Utente.h"

using namespace std;

Utente::Utente() {};
Utente::Utente(string nome):Pessoa(nome){}
Utente::Utente(int ID, string nome, Data adesao) : Pessoa(ID, nome, adesao) {}

