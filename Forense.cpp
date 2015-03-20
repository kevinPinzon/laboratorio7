#include "Investigador.h"
#include "GestionPersonal.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Forence::Forence(string nombreReal,string nombreUsuario,string contrasena,int edad, string cedula_identidad,string fecha_nacimiento,
	string fecha_ingreso,string horario):GestionPersonal( nombreReal, 
	nombreUsuario, contrasena, edad, cedula_identidad, fecha_nacimiento){
		this->fecha_ingreso = fecha_ingreso;
		this->horario = horario;

}
string Forence::toString()const{
	stringstream ss;
	ss<<"Forence: "<<GestionPersonal::toString();
	return ss.str();
	}

string Forence::getFecha_ingreso()const{
	return fecha_ingreso;
}
string Forence::getHorario()const{
	return horario;
}

void Forence::setFecha_ingreso(string fecha_ingreso){
	this->fecha_ingreso=fecha_ingreso;
}
void Forence::setHorario(string horario){
	this->horario=horario;
}