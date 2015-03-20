#ifndef GESTIONPERSONAL_H
#define GESTIONPERSONAL_H

#include <string>

using std::string;

class GestionPersonal{

	string nombreReal;
	string nombreUsuario;
	string contrasena;
	int edad;
	string cedula_identidad;
	string fecha_nacimiento;

protected:
	string getNombreReal()const;
	string getNombreUsuario()const;
	string getContrasena()const;
	int getEdad()const;
	string getCedula_identidad()const;
	string getFecha_nacimiento()const;

	void setNombreReal(string);
	void setNombreUsuario(string);
	void setContrasena(string);
	void setEdad(int);
	void setCedula_identidad(string);
	void setFecha_nacimiento(string);

public:
	GestionPersonal(string,string,string,int,string,string);
	GestionPersonal(const GestionPersonal&);
	virtual string toString()const=0;

};
#endif