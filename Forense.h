#pragma once

#include "GestionPersonal.h"

#include <string>

using std::string;

class Forence: public GestionPersonal{
string fecha_ingreso;
string horario;

public:
	Forence(string,string);
	virtual string toString();

	string getFecha_ingreso()const;
	string getHorario()const;

	void setFecha_ingreso(string);
	void setHorario(string);
}