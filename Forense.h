#pragma once

#include "GestionPersonal.h"

#include <string>

using std::string;

class Forense: public GestionPersonal{
string fecha_ingreso;
string horario;

public:
	Forense(string,string,string,int,string,string, /**/ string,string);
	virtual string toString()const;
	~Forense();

	string getFecha_ingreso()const;
	string getHorario()const;

	void setFecha_ingreso(string);
	void setHorario(string);
};