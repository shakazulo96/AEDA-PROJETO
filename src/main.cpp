
#include "Piscina.h"
#include "Pessoa.h"
#include "Utente.h"
#include "Professor.h"
#include <iostream>
#include <sstream>
#include "Interface.h"
#include "Ficheiros.h"
using namespace std;

int main() {
//	//Piscinas
//	Piscina piscina1("Piscina da Retrete1", 50);
//	Piscina piscina2("Piscina da Retrete2", 159);
//
//	//Clientes
//	Pessoa *pessoa1 = new Utente(90, "OhDomPiano");
//	Pessoa *pessoa2 = new Utente("OhLongJhonson");
//	Pessoa *pessoa3 = new Utente("Towelie");
//cout << pessoa1->getNome();
//	//Professores
//	Pessoa *professor1 = new Professor("Taveira");
//	Pessoa *professor2 = new Professor("Angelico");
//	Pessoa *professor3 = new Professor("Beterraba");
//
//	//Adiciona Clientes
//	piscina1.addClientes(pessoa1);
//	piscina2.addClientes(pessoa2);
//	piscina2.addClientes(pessoa3);
//
//	//Adiciona Professores
//	piscina1.addProfessores(professor1);
//	piscina2.addProfessores(professor2);
//	piscina2.addProfessores(professor3);
//
//	Data *data1 = new Data(2016,6,6,6,30);
//	Data *data2 = new Data(2016,6,7,6,30);
//	Data *data3 = new Data(2016,6,25,6,30);
//	Data *data4 = new Data(2016,6,27,7,00);
//
//	piscina1.podeEntrar(pessoa1, data1);
//	piscina1.podeEntrar(pessoa1, data2);
//	piscina1.podeEntrar(pessoa1, data3);
//	piscina1.podeEntrar(pessoa1, data4);
//
//	vector<Piscina> piscinas;
//	piscinas.push_back(piscina1);
//	piscinas.push_back(piscina2);
//
//	for(unsigned int k = 0; k < piscinas.size(); k++){
//		cout << piscinas[k].getNome() << "\n";
//		cout << "Clientes: " ;
//		for(unsigned int i = 0; i < piscinas[k].getClientes().size(); i++){
//			cout << piscinas[k].getClientes()[i]->getNome() << " ";
//		}
//		cout << "\n" << "Professores: ";
//		for(unsigned int i = 0; i < piscinas[k].getProfessores().size(); i++){
//					cout << piscinas[k].getProfessores()[i]->getNome() << " ";
//		}
//		cout << "\n\n";
//	}
//
//	cout << piscina1.valorAPagar(pessoa1, 2016, 6);
//
		// Greeting
		welcome();

		// Piscina variable
		Piscina p;

		//  FileNames
		vector<string> filenames = Filenames();

		// Load From Files
		//load(p, filenames);

		// Application Loop
		Interface(p);

		// Save to Files
		//save(p, filenames);

		// Goodbye
		goodbye();

		return 0;

	return 0;
}

