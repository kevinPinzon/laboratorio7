#pragma once

#include "GestionPersonal.h"

#include <string>

using std::string;

class Investigador: public GestionPersonal{
int casosAtendidos;
int casosCerrados;
int casosAbiertos;

public:
	Investigador(int,int,int);
	virtual string toString();

	int getCasosAtendidos()const;
	int getCasosCerrados()const;
	int getCasosAbiertos()const;

	void setCasosAtendidos(int);
	void setCasosCerrados(int);
	void setCasosAbiertos(int);


};