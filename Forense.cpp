#include "Investigador.h"
#include "GestionPersonal.h"
#include "Forense.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Forense::Forense(string nombreReal,string nombreUsuario,string contrasena,int edad, string cedula_identidad,string fecha_nacimiento,
	string fecha_ingreso,string horario):GestionPersonal( nombreReal, 
	nombreUsuario, contrasena, edad, cedula_identidad, fecha_nacimiento){
		this->fecha_ingreso = fecha_ingreso;
		this->horario = horario;

}
Forense::~Forense(){
	GestionPersonal::~GestionPersonal();
}
string Forense::toString()const{
	stringstream ss;
	ss<<"Forense: "<<GestionPersonal::toString();
	return ss.str();
	}

string Forense::getFecha_ingreso()const{
	return fecha_ingreso;
}
string Forense::getHorario()const{
	return horario;
}

void Forense::setFecha_ingreso(string fecha_ingreso){
	this->fecha_ingreso=fecha_ingreso;
}
void Forense::setHorario(string horario){
	this->horario=horario;
}