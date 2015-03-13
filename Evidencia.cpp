#include "Evidencia.h"
#include <iostream>
#include <sstream>

using namespace std;

Evidencia::Evidencia(string nombre, string tipoObjeto, string lugar, bool huellas, bool process){
	this->nombre =  nombre;
	this->tipoObjeto =  tipoObjeto;
	this->lugar =  lugar;
	this->huellas =  huellas;
	this->process =  process;
}

string Evidencia::getNombre()const{
	return nombre;
}
string Evidencia::getTipoObjeto()const{
	return tipoObjeto;
}
string Evidencia::getLugar()const{
	return lugar;
}
bool Evidencia::getHuellas()const{
	return huellas;
}
bool Evidencia::getProcess()const{
	return process;
}

void Evidencia::setNombre(string nombre){
	this->nombre = nombre;
}
void Evidencia::setTipoObjeto(string tipoObjeto){
	this->tipoObjeto = tipoObjeto;
}
void Evidencia::setLugar(string lugar){
	this->lugar = lugar;
}
void Evidencia::Evidencia::setHuellas(bool huellas){
	this->huellas = huellas;
}
void Evidencia::setProcess(bool process){
	this->process = process;
}

string toString()const{
	stringstream ss;
	ss << "Nombre: " << nombre << "Tipo de Objeto: " << tipoObjeto;
	return ss.str();
}