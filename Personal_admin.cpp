#include "Personal_admin.h"
#include "GestionPersonal.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;
//string,string,string,int,string,string
//string nombreReal,string nombreUsuario,string contrasena,int edad, string cedula_identidad,string fecha_nacimiento
Personal_admin::Personal_admin(nombreReal,string nombreUsuario,string contrasena,int edad, string cedula_identidad,string fecha_nacimiento, 
	string clave_ingreso, string puesto_orga):GestionPersonal( nombreReal, 
	nombreUsuario, contrasena, edad, cedula_identidad, fecha_nacimiento){

}
string Personal_admin::toString()const{
	stringstream ss;
	ss<<"Personal administrativo: "<<GestionPersonal::toString();
	return ss.str();
}

string 	Personal_admin::getClave_ingreso()const{
	return clave_ingreso;
}
string Personal_admin::getPuesto_orga()const{
	return puesto_orga;
}

void Personal_admin::setClave_ingreso(string clave_ingreso){
	this->clave_ingreso=clave_ingreso;
}	

void Personal_admin::setPuesto_orga(string puesto_orga){
	this->puesto_orga=puesto_orga;
}


