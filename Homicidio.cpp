#include <vector>
#include "GestionCasos.h"
#include <string>
#include "Homicidio.h"
#include "Evidencia.h"
#include "Investigador.h"
#include <sstream>

using namespace std;

homicidio::homicidio(int numero_caso, vector<Investigador>investigador,vector<Evidencia>evidencia, string hora ,string fecha,bool caso_cerrado
	,vector<string> lista_nombres ,string sospechoso_principal ,string victima):GestionCasos(numero_caso, investigador,evidencia,  hora , fecha, caso_cerrado){

	this->lista_nombres=lista_nombres;
	
	this.victima->victima;
	string culpable;
	if (this->caso_cerrado==true)
	{	
		
		cout<<"Ingrese el culpable"<< endl;
		cin>>culpable;
		this->culpable=culpable;
	} else {
		culpable="NO hay culpable aun"<<endl;
		this->culpable=culpable;
	}

}
homicidio::homicidio(const homicidio&){

}
 string homicidio::toString ()const{
 	stringstream ss;
	ss<<GestionCasos::toString()<<" Lista de nombres de sospechosos: "<< lista_nombres<< " victima: " <<victima 
	<< " culpable"<< culpable; //falata sospe prin.
	return ss.str();
}
vector<string> homicidio::getlista_nombres()const{
	return lista_nombres;
}
string homicidio::getsospechoso_principal()const{
	return sospechoso_principal;
}
string homicidio::getculpable()const{
	return culpable;
}
string homicidio::getvictima()const{
	return victima;
}
void homicidio::setlista_nombre(vector<string> r){
	this->lista_nombres=r;
}
void homicidio::setsospechoso_principal(string r){
	this->sospechoso_principal=r;
}
void homicidio::setculpable(string r){
	this->culpable=r;
}
void homicidio::setvictima(string r){
	this->victima=r;
}