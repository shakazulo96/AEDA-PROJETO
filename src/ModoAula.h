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
string getHorariodaAula() const;
string getProfessorResponsavel();
int getNumUtentesAula();


};
