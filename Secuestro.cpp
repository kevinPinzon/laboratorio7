#include <vector>
#include "GestionCasos.h"
#include <string>
#include "Secuestro.h"
#include "Evidencia.h"
#include "Investigador.h"
#include <sstream>

using namespace std;

secuestro::secuestro(int numero_caso, vector<Investigador>*investigador,vector<Evidencia>*evidencia, string hora ,string fecha,bool caso_cerrado,
 string victima,string lugar ,string motivo ,bool rescate):GestionCasos(numero_caso, investigador,evidencia,  hora , fecha, caso_cerrado){

	this->victima=victima;
	this->lugar=lugar;
	this->motivo=motivo;
	this->rescate=rescate;
	if (this->rescate==true)
	{
		double cantidad;
		cout<<"Ingrese la cantidad del Rescate" << endl;
		cin>>cantidad;
		this->cantidad=cantidad;
	}
	
	if (getcaso_cerrado()==true)
	{
		int num;
		cout<<"Ingrese 1-si esta vivo 2-si esta muerto" <<endl;
		cin>>num;
		string estado_victima;
		if (num==1)
		{
			estado_victima="Vivo";
			this->estado_victima=estado_victima;
		} else {
			estado_victima="muerto";
			this->estado_victima=estado_victima;
		}
	}

}
//secuestro::secuestro(const Secuestro&){

//}

secuestro::~secuestro(){
	GestionCasos::~GestionCasos();
}
string secuestro::toString ()const{
	stringstream ss;
	ss<<GestionCasos::toString()<< " victima: " <<victima 
	<< " Lugar: "<< lugar<< " Motivo: "<<motivo<< " Rescate"<< rescate; //falata sospe prin.
	return ss.str();
}
string secuestro::getlugar()const{
	return lugar;
}
string secuestro::getmotivo()const{
	return motivo;
}
string secuestro::getestado_victima()const{
	return estado_victima;
}
string secuestro::getvictima()const{
	return victima;
}
bool secuestro::getrescate()const{
	return rescate;
}
double secuestro::getcantidad() const{
	return cantidad;
}
void secuestro::setlugar(string x){
	this->lugar=x;
}
void secuestro::setmotivo(string x){
	this->motivo=x;
}
void secuestro::setestado_victima(string x){
	this->estado_victima=x;
}
void secuestro::setvictima(string x){
	this->victima=x;
}
void secuestro::setrescate(bool x){
	this->rescate=x;
}
void secuestro::setcantidad(double x){
	this->cantidad=x;
}