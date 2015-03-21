#include <vector>
#include "GestionCasos.h"
#include <string>
#include "Homicidio.h"
#include "Evidencia.h"
#include "Investigador.h"
#include <sstream>

using namespace std;

Homicidio::Homicidio(int numero_caso, vector<Investigador>*investigador,vector<Evidencia>*evidencia, string hora ,string fecha,bool caso_cerrado
	,vector<string> lista_nombres ,string sospechoso_principal ,string victima):GestionCasos(numero_caso, investigador,evidencia,  hora , fecha, caso_cerrado){

	this->lista_nombres=lista_nombres;
	
	this->victima=victima;
	string culpable;
	if (getcaso_cerrado()==true)
	{	
		
		cout<<"Ingrese el culpable"<< endl;
		cin>>culpable;
		this->culpable=culpable;
	} else {
		culpable="NO hay culpable aun";
		this->culpable=culpable;
	}

}
Homicidio::~Homicidio(){
	GestionCasos::~GestionCasos();
}
//Homicidio::Homicidio(const Homicidio&){

//}
 string Homicidio::toString ()const{
 	stringstream ss;
	ss<<GestionCasos::toString()<<" Lista de nombres de sospechosos: ";
	for (int i = 0; i < lista_nombres.size(); ++i){
		ss << lista_nombres[i] << " ";
	}
	ss << " victima: " <<victima << " culpable"<< culpable; //falata sospe prin.
	return ss.str();
}
vector<string> Homicidio::getlista_nombres()const{
	return lista_nombres;
}
string Homicidio::getsospechoso_principal()const{
	return sospechoso_principal;
}
string Homicidio::getculpable()const{
	return culpable;
}
string Homicidio::getvictima()const{
	return victima;
}
void Homicidio::setlista_nombre(vector<string> r){
	this->lista_nombres=r;
}
void Homicidio::setsospechoso_principal(string r){
	this->sospechoso_principal=r;
}
void Homicidio::setculpable(string r){
	this->culpable=r;
}
void Homicidio::setvictima(string r){
	this->victima=r;
}