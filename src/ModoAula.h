#pragma once
#include "utils.h"




using namespace std;

class ModoAula
{
private:
	vector<Data> HorarioAula;
	int NumUtentesAula;
	
public:


	//Constructors

	ModoAula();

	//Destructor
	virtual ~ModoAula();

	//Sets




	//Gets
vector<Data> getHorariodaAula();
string getProfessorResponsavel();
int getNumUtentesAula();


};
