#include "Investigador.h"
#include "GestionPersonal.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Investigador::Investigador(string nombreReal,string nombreUsuario,string contrasena,int edad, string cedula_identidad,string fecha_nacimiento,
	int casosAtendidos,int casosCerrados,int casosAbiertos):GestionPersonal( nombreReal, 
	nombreUsuario, contrasena, edad, cedula_identidad, fecha_nacimiento){
		this->casosAtendidos = casosAtendidos;
		this->casosCerrados = casosCerrados;
		this->casosAbiertos = casosAbiertos;

}
Investigador::~Investigador(){
	GestionPersonal::~GestionPersonal();
}
string Investigador::toString()const{
	stringstream ss;
	ss<<"Investigador: "<<GestionPersonal::toString();
	return ss.str();
	}

int Investigador::getCasosAtendidos()const{
	return casosAtendidos;
}
int Investigador::getCasosCerrados()const{
	return casosCerrados;
}
int Investigador::getCasosAbiertos()const{
	return casosAbiertos;
}

void Investigador::setCasosAtendidos(int casosAtendidos){
	this->casosAtendidos=casosAtendidos;
}
void Investigador::setCasosCerrados(int casosCerrados){
	this->casosCerrados=casosCerrados;
}
void Investigador::setCasosAbiertos(int casosAbiertos){
	this->casosAbiertos=casosAbiertos;
}
