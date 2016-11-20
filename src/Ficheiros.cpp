//#include "Ficheiros.h"
//#include <fstream>
//using namespace std;
//
//
//void load(Piscina & p, vector<string> ficheiros)
//{
//	// Clientes
//
//	ifstream clientes(ficheiros.at(0));
//
//	string clienteString;
//
//	while (getline(clientes, clienteString))
//	{
//		// Get positions
//
//		int pos1 = -1;
//		int pos2 = -1;
//		int pos3 = -1;
//
//		for (unsigned int i = 0; i < clienteString.size(); i++)
//		{
//			if (clienteString.at(i) == ';')
//			{
//				if (pos1 == -1)
//					pos1 = i;
//				else if (pos2 == -1)
//					pos2 = i;
//				else
//					pos3 = i;
//			}
//		}
//
//		// Get positions
//		string nome;
//		string idString = clienteString.substr(0, pos1 - 1);
//		nome = clienteString.substr(pos1 + 2, pos2 - pos1 - 3); // Nome
//		string adesaoString = clienteString.substr(pos2 + 2, pos3 - pos2 - 3);
//		string saldoString = clienteString.substr(pos3 + 2, clienteString.size() - pos3 - 1);
//
//
//		stringstream ss;
//
//		// ID Cliente
//		int ID;
//		ss << idString;
//		ss >> ID;
//
//		ss.clear();
//		ss.str("");
//
//		// Data
//		Data adesao;
//		string d;
//		ss << adesaoString;
//		ss >> d;
//		adesao = Data(d);
//		ss.clear();
//		ss.str("");
//
//		// Saldo
//		int saldo;
//		ss << saldoString;
//		ss >> saldo;
//		ss.clear();
//		ss.str("");
//		Utente * c = new Utente(ID,nome,adesao,saldo);
//		p.addClientes(c);
//
//
//	}
//
//	// Professores
//
//	ifstream professores(ficheiros.at(1));
//
//	string professorString;
//
//	while (getline(professores, professorString))
//	{
//		// Get positions
//
//		int pos1 = -1;
//		int pos2 = -1;
//		int pos3 = -1;
//
//		for (unsigned int i = 0; i < professorString.size(); i++)
//		{
//			if (professorString.at(i) == ';')
//			{
//				if (pos1 == -1)
//					pos1 = i;
//				else if (pos2 == -1)
//					pos2 = i;
//				else
//					pos3 = i;
//			}
//		}
//
//		// Get positions
//		string nome;
//		string idString = professorString.substr(0, pos1 - 1);
//		nome = professorString.substr(pos1 + 2, pos2 - pos1 - 3); // Nome
//		string adesaoString = professorString.substr(pos2 + 2, pos3 - pos2 - 3);
//		//string saldoString = clienteString.substr(pos3 + 2, clienteString.size() - pos3 - 1);
//
//
//		stringstream ss;
//
//		// ID Professor
//		int ID;
//		ss << idString;
//		ss >> ID;
//
//		ss.clear();
//		ss.str("");
//
//		// Data
//		Data adesao;
//		string d;
//		ss << adesaoString;
//		ss >> d;
//		adesao = Data(d);
//
//		ss.clear();
//		ss.str("");
//		Professor * r = new Professor(ID, nome, adesao);
//		p.addProfessores(r);
//
//		/* Saldo
//		int saldo;
//		ss << saldoString;
//		ss >> saldo;
//
//		ss.clear();
//		ss.str("");*/
//	}
//
//	// Aulas
//	/*
//	ifstream aulas(ficheiros.at(2));
//
//	string aulaString;
//
//	getline(aulas, clientString);
//	while (getline(transacoes, transactionString))
//	{
//		Transacao * t = new Transacao(transactionString);
//		s.insertTransaction(*t);
//	}        */
//}
//
//void save(Piscina & p, vector<string> ficheiros)
//{
//	// Clientes
//
//	ofstream clientes(ficheiros.at(0));
//
//	for (unsigned int i = 0; i < p.getClientes().size(); i++)
//		clientes << p.getClientes()[i]->toString() << endl;
//
//	// Professores
//
//	ofstream professores(ficheiros.at(1));
//
//	for (unsigned int i = 0; i < p.getProfessores().size(); i++)
//		professores << p.getProfessores()[i]->toString() << endl;
//
//	// Aulas
//	/*
//	ofstream aulas(ficheiros.at(2));
//
//	aulas << s.getAulas().size() << endl;
//	for (unsigned int i = 0; i < s.getAulas().size(); i++)
//		aulas << s.getAulas()[i].toString() << endl;    */
//}
