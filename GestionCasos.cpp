#include "Evidencia.h"
#include "Investigador.h"
#include "GestionCasos.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;

GestionCasos::GestionCasos(int numero_caso, vector<Investigador>*investigador,vector<Evidencia>*evidencia, string hora ,string fecha,bool caso_cerrado){
this->numero_caso=numero_caso;
this->investigador=investigador;
this->evidencia=evidencia;
this->hora=hora;
this->fecha=fecha;
this->caso_cerrado=caso_cerrado;
}
//GestionCasos::~GestionCasos(){

//}
string GestionCasos::toString ()const{
	stringstream ss;
	ss<<" Numero de caso "<<numero_caso<<" Investigadores: "<<investigador<<" Evidencia: " << evidencia << " Hora: " << hora << " Caso: " << numero_caso ;
	return ss.str();
}
int GestionCasos::getnumero_caso()const{
	return numero_caso;
}
vector<Investigador>* GestionCasos::getinvestigador()const{
	return investigador;
}
vector<Evidencia>* GestionCasos::getevidencia()const{
	return evidencia;
}
string GestionCasos::gethora()const{
	return hora;
}
string GestionCasos::getfecha()const{
	return fecha;
}
bool GestionCasos::getcaso_cerrado()const{
	return caso_cerrado;
}
void GestionCasos::setnumero_caso(int  x){
 this->numero_caso=x;
}
void GestionCasos::setinvestigador(vector<Investigador>* x){
	this->investigador=x;
}
void GestionCasos::setevidencia(vector<Evidencia>* x){
	this->evidencia=x;
}
void GestionCasos::setfecha(string x){
	this->fecha=x;
}
void GestionCasos::sethora(string x){
	this->hora=x;
}
void GestionCasos::setcaso_cerrado(bool x){
	this->caso_cerrado=x;
}