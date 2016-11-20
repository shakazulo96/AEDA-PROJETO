#include <cstdlib>
#include "Interface.h"
#include "Utente.h"
#include "Professor.h"

using namespace std;


void welcome(){
	system("cls");
	cout << "Bem vindo ao software piscina 2.0" << endl;
	system("pause");
}

vector<string> Filenames(){
	vector<string> ret;
	ret.push_back("clientes.txt");
	ret.push_back("professores.txt");
	ret.push_back("aulas.txt");
	return ret;
}

template<typename T>
T getNextNumber(){
	T command = -1;
	cin >> command;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');
	}

	return command;
}

int getCommand(){
	system("cls");

	cout << "O que pretende fazer?" << endl;
	cout << "1 - Adicionar" << endl;
	cout << "2 - Remover" << endl;
	cout << "3 - Entrar" << endl;
	cout << "4 - Mostrar" << endl;
	cout << "5 - Sair" << endl;

	return getNextNumber<int>();
}

void Interface(Piscina & p)
{
	bool running = true;
	int command;

	while (running)
	{
		system("cls");
		command = getCommand();

		switch (command)
		{
			// Add
		case 1:
			addScreen(p);
			break;

			// Remove
		case 2:
			removeScreen(p);
			break;

			// Update
		case 3:
			updateScreen(p);
			break;

			// Show
		case 4:
			showScreen(p);
			break;

			// Exit
		case 5:
			running = false;
			break;

		default:
			break;
		}
	}
}

void addScreen(Piscina & p)
{
	// Interface
	system("cls");

	cout << "O que quer adicionar?" << endl;
	cout << "1 - Adicionar Utente" << endl;
	cout << "2 - Adicionar professor" << endl;
	cout << "3 - Adicionar Aula" << endl;
	cout << "4 - Atribuir Aulas aos Professores" << endl;
	cout << "5 - Return" << endl;

	// Get Command
	int command = getNextNumber<int>();

	// Decision Variables
	string name;
	int ID, cenas, aulasSemProf;
	string t;
	Utente *c;
	Professor *r;
	Aula *aula;
	int saldo;
	Data *dataAula;

	// Decision
	switch (command)
	{
	case 1:
		system("cls");
		cout << "Qual e o ID do utente?" << endl;
		ID = getNextNumber<int>();

		if (ID < 0)
		{
			cout << "ID invalido" << endl;
			system("pause");
			break;
		}

		if (p.existeID(ID))
		{
			cout << "Este ID ja existe" << endl;
			system("pause");
			break;
		}

		cin.ignore(10000, '\n');
		cout << "Qual e o nome do utente?" << endl;
		getline(cin, name);

		cout << "Qual e a data de adesao do utente?(dia/mes/ano-hora/minuto)" << endl;
		getline(cin, t);

		if (!Data(t).isValid())
		{
			cout << "Data invalida" << endl;
			system("pause");
			break;
		}
		cout << "Qual e o saldo do cliente?(€)" << endl;
		cin >> saldo;
		c = new Utente(ID, name, t, saldo);
		p.addClientes(c);

		break;

	case 2:
		system("cls");
		cout << "Qual e o ID do professor?" << endl;
		ID = getNextNumber<int>();

		if (ID < 0)
		{
			cout << "ID invalido" << endl;
			system("pause");
			break;
		}

		if (p.existeID(ID))
		{
			cout << "Este ID ja existe" << endl;
			system("pause");
			break;
		}

		cin.ignore(10000, '\n');
		cout << "Qual e o nome do professor?" << endl;
		getline(cin, name);

		cout << "Qual e a data de adesao do professor?(dia/mes/ano-hora/minuto)" << endl;
		getline(cin, t);

		if (!Data(t).isValid())
		{
			cout << "Data invalida" << endl;
			system("pause");
			break;
		}


		r = new Professor(ID,name, t);
		p.addProfessores(r);

		break;
	case 3:
		system("cls");
		cout << "Qual e o ID da Aula?" << endl;
		ID = getNextNumber<int>();

		if (ID < 0){
			cout << "ID invalido" << endl;
			system("pause");
			break;
		}


		cout << "Qual e o numero maximo de clientes?" << endl;
		cenas = getNextNumber<int>();
		cin.ignore(10000, '\n');
		cout << "Qual e a data da aula?(dia/mes/ano-hora/minuto)" << endl;
		getline(cin, t);

		if (!Data(t).isValid()){
			cout << "Data invalida" << endl;
			system("pause");
			break;
		}


		aula = new Aula(ID, cenas);
		dataAula = new Data(t);
		aula->setHorario(dataAula);
		p.addAulas(aula);
		break;
	case 4:
		system("cls");

		cin.ignore(10000, '\n');
		aulasSemProf = p.atribuiAulas();
		cout << "Número de aulas sem professor: " << aulasSemProf << "\n";
		break;
	default:
		break;
	}
}

void removeScreen(Piscina & p)
{
	// Interface
	system("cls");

	cout << "O que quer remover?" << endl;
	cout << "1 - Remover Utente" << endl;
	cout << "2 - Remover Professor" << endl;
	cout << "3 - Remove Aula" << endl;
	cout << "4 - Return" << endl;

	// Get Command
	int command = getNextNumber<int>();

	// Decision Variables
	string produto;
	int ID;
	string t;

	// Decision
	switch (command)
	{
	case 1:
		system("cls");
		cout << "Qual e o ID do utente?" << endl;
		ID = getNextNumber<int>();

		if (ID == -1)
		{
			cout << "ID invalido" << endl;
			system("pause");
			break;
		}

		if (!p.existeID(ID))
		{
			cout << "Este utente nao existe" << endl;
			system("pause");
			break;
		}
		p.removeCliente(ID);
		break;


	case 2:
		system("cls");
		cout << "Qual e o ID do professor?" << endl;
		ID = getNextNumber<int>();

		if (ID == -1)
		{
			cout << "ID invalido" << endl;
			system("pause");
			break;
		}

		if (!p.existeID(ID))
		{
			cout << "Este professor nao existe" << endl;
			system("pause");
			break;
		}
		p.removeProfessor(ID);
		break;

	case 3:




	default:
		break;
	}
}

void updateScreen(Piscina & p){
	system("cls");
	cout << "Onde pretende entrar?" << "\n";
	cout << "1 - Entrar na Piscina?" << endl;
	cout << "2 - Entrar em Aula?" << endl;
	int ID = 0, ID2 = 0;
	Data *data;
	string t = " ";
	int command = getNextNumber<int>();
	switch (command){
		case 1:
			system("cls");
			cout << "Qual e o ID do utente?" << endl;
			ID = getNextNumber<int>();

			cin.ignore(10000, '\n');
			cout << "Qual e a data da aula?(dia/mes/ano-hora/minuto)" << endl;
			getline(cin, t);

				if (!Data(t).isValid()){
					cout << "Data invalida" << endl;
					system("pause");
					break;
				}

				data= new Data(t);

				if(!p.getClientes().empty()){
				for(unsigned int i = 0; i < p.getClientes().size(); i++){
					if(p.getClientes()[i]->getID() == ID){
						if(!p.podeEntrar(p.getClientes()[i],data)) cout << "Falso, não pode entrar" << "\n";
						else {
							p.getClientes()[i]->setHorario(data);
							cout << "True, pode entrar" << "\n";
						}
						break;
					}
				}
				}
				else cout << "Não exite um cliente com esse ID" << "\n";
				break;
		case 2:
			system("cls");
			cout << "Qual e o ID do utente?" << endl;
			ID = getNextNumber<int>();

			cout << "Qual e o ID da aula?" << endl;
			ID2 = getNextNumber<int>();

			for(unsigned int i = 0; i < p.getClientes().size(); i++){
				if(p.getClientes()[i]->getID() == ID){
					for(unsigned int j = 0; j < p.getAulas().size();j++){
						if(p.getAulas()[j]->getId() == ID2){
							if((p.getAulas()[j]->getNMaxClientes()) > (p.getAulas()[j]->getClientesAtuais())){
								p.getClientes()[i]->addAula(p.getAulas()[j]);
								p.getAulas()[j]->incClientesAtuais();
								cout << "Entrou na aula \n";
								break;
							}
							else cout << "Está cheia \n";
						}
					}
				}
			}
			cout << "Não entrou na aula \n";
			break;

	default:
			break;


	}
}

void showScreen(Piscina & p)
{
	// Interface
	system("cls");

	int preco = 0;
	int balance = 0;

	cout << "O que quer visualizar?" << endl;
	cout << "1 - Mostrar utentes" << endl;
	cout << "2 - Mostrar professores" << endl;
	cout << "3 - Ocupacao da piscina" << endl;
	cout << "4 - Mostrar aulas" << endl;
	cout << "5 - Recibo do utente" << endl;
	cout << "6 - Voltar" << endl;

	// Get Command
	int command = getNextNumber<int>();



	// Decision
	switch (command)
	{
	case 1:

		system("cls");
		//p.sortUtentesPerName();
		p.printUtentes();
		system("pause");

		break;

	case 2:
		system("cls");
		//p.sortProfessoresPerName();
		p.printProfessores();
		system("pause");

		break;

	case 3:
      //-------------------------

		break;
	case 4:
		system("cls");
		p.printAulas();
		system("pause");
		//---------------------

		break;
	case 5:
		
		int id;
		system("cls");
		cout << "Qual o id do cliente?" << endl;
		cin >> id;
		//pesquisar o cliente
	    // preco = float valorAPagar(cliente, int ano, int mes);
		 //balance = getSaldo();
		 //diferencaSaldo(Utente *c, balance, preco);
		 //cout<< float valorAPagar(cliente, int ano, int mes);
		

		
		
		//-------------

		break;



	default:
		break;
	}
}

/*void secondScreen(Piscina & p)
{
	// Interface horarios
	system("cls");

	cout << "Que horários deseja visualizar?" << endl;
	cout << "1 - Horário das Aulas" << endl;
	cout << "2 - Horário dos professores" << endl;
	cout << "3 - Voltar" << endl;

	// Get Command
	int command = getNextNumber<int>();



	// Decision
	switch (command)
	{
	case 1:
		//----------
		break;
	case 2:
		//----------
		break;

	default:
		break;
	}
}*/

void goodbye()
{
	system("cls");
	cout << "Os seus ficheiros foram guardados" << endl;
	cout << "Obrigado" << endl;
}
