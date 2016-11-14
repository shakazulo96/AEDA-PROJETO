#include "Interface.h"

using namespace std;


void welcome()
{
	system("cls");
	cout << "Welcome to the supermarket software" << endl;
	system("pause");
}

vector<string> Filenames()
{
	vector<string> ret;
	ret.push_back("filenumber1");
	ret.push_back("filenumber2");
	ret.push_back("filenumber3");
	return ret;

}

template<typename T>
T getNextNumber()
{
	T command = -1;

	cin >> command;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');
	}

	return command;
}

int getCommand()
{
	system("cls");

	cout << "O que pretende fazer?" << endl;
	cout << "1 - Adicionar" << endl;
	cout << "2 - Remover" << endl;
	cout << "3 - ------" << endl;
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
	cout << "4 - Return" << endl;

	// Get Command
	int command = getNextNumber<int>();

	// Decision Variables
	string name;
	int ID;
	string t;
		

	// Decision
	switch (command)
	{
	case 1:
		system("cls");
		cout << "Qual é o ID do utente?" << endl;
		ID = getNextNumber<int>();

		if (ID < 0)
		{
			cout << "ID inválido" << endl;
			system("pause");
			break;
		}

		if (p.idExiste(ID))
		{
			cout << "Este ID já existe" << endl;
			system("pause");
			break;
		}

		cin.ignore(10000, '\n');
		cout << "Qual é o nome do utente?" << endl;
		getline(cin, name);

		cout << "Qual é a data de adesão do utente?" << endl;
		getline(cin, t);

		if (!Data(t).isValid())
		{
			cout << "Invalid Date" << endl;
			system("pause");
			break;
		}

		p.insertUtente(*(new Utente(ID, name, Data(t))));

		break;

	case 2:
		system("cls");
		cout << "Qual é o ID do professor?" << endl;
		ID = getNextNumber<int>();

		if (ID < 0)
		{
			cout << "ID inválido" << endl;
			system("pause");
			break;
		}

		if (p.idExiste(ID))
		{
			cout << "Este ID já existe" << endl;
			system("pause");
			break;
		}

		cin.ignore(10000, '\n');
		cout << "Qual é o nome do professor?" << endl;
		getline(cin, name);

		cout << "Qual é a data de adesão do professor?" << endl;
		getline(cin, t);

		if (!Data(t).isValid())
		{
			cout << "Data inválida" << endl;
			system("pause");
			break;
		}

		p.insertProfessor(*(new Professor(ID, name, Data(t))));

		break;
	case 3:
		

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
		cout << "Qual é o ID do utente?" << endl;
		ID = getNextNumber<int>();

		if (ID == -1)
		{
			cout << "ID inválido" << endl;
			system("pause");
			break;
		}

		if (!p.idExiste(ID))
		{
			cout << "Este utente não existe" << endl;
			system("pause");
			break;
		}
		p.removeUtente(ID);
		break;


	case 2:
		system("cls");
		cout << "Qual é o ID do professor?" << endl;
		ID = getNextNumber<int>();

		if (ID == -1)
		{
			cout << "ID inválido" << endl;
			system("pause");
			break;
		}

		if (!p.idExiste(ID))
		{
			cout << "Este professor não existe" << endl;
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

void updateScreen(Piscina & p){}

void showScreen(Piscina & p)
{
	// Interface
	system("cls");

	cout << "O que quer visualizar?" << endl;
	cout << "1 - Mostrar utentes" << endl;
	cout << "2 - Mostrar professores" << endl;
	cout << "3 - Ocupação da piscina" << endl;
	cout << "4 - Mostrar horários" << endl;
	cout << "5 - Recibo e Contas do utente" << endl;
	cout << "5 - Voltar" << endl;

	// Get Command
	int command = getNextNumber<int>();

	

	// Decision
	switch (command)
	{
	case 1:

		system("cls");
		p.sortUtentesPerName();
		p.printUtentes();
		system("pause");

		break;

	case 2:
		system("cls");
		p.sortProfessoresPerName();
		p.printProfessores();
		system("pause");

		break;

	case 3:
      //-------------------------

		break;
	case 4:
		secondScreen(p);
		//---------------------

		break;
	case 5:
		//-------------
		
		break;

	

	default:
		break;
	}
}

void secondScreen(Piscina & p)
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
}
