#pragma once

#include "GestionPersonal.h"

#include <string>

using std::string;

class Personal_admin: public GestionPersonal {
	string clave_ingreso;
	string puesto_orga;

public:
	Personal_admin(string,string);
	virtual string toString()const;

	string getClave_ingreso()const;
	string getPuesto_orga()const;

	void setClave_ingreso(string);
	void setPuesto_orga(string);


};
