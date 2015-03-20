#include "investigado.h"
#include "GestionPersonal.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Investigador::Investigador(int casosAtendidos,int casosCerrados,int casosAbiertos):GestionPersonal( nombreReal, 
	nombreUsuario, contrasena, edad, cedula_identidad, fecha_nacimiento){

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
