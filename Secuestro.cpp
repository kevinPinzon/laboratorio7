#include <vector>
#include "GestionCasos.h"
#include <string>
#include "Secuestro.h"
#include "Evidencia.h"
#include "Investigador.h"
#include <sstream>

using namespace std;

secuestro::secuestro(int numero_caso, vector<Investigador>investigador,vector<Evidencia>evidencia, string hora ,string fecha,bool caso_cerrado,
 ,string victima,string lugar ,string motivo ,bool rescate):GestionCasos(numero_caso, investigador,evidencia,  hora , fecha, caso_cerrado){

	this->victima=victima;
	this->lugar=lugar;
	this->motivo=motivo;
	this->rescate=rescate;
	if (this->rescate==true)
	{
		double cantidad;
		cout<<"Ingrese la cantidad del Rescate" endl;
		cin>>cantidad;
		this->cantidad=cantidad;
	}
	
	if (this->caso_cerrado==true)
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
Secuestro::secuestro(const Secuestro&){

}
string Secuestro::toString ()const{
	stringstream ss;
	ss<<GestionCasos::toString()<< " victima: " <<victima 
	<< " Lugar: "<< lugar<< " Motivo: "<<motivo<< " Rescate"<< rescate; //falata sospe prin.
	return ss.str();
}
string Secuestro::getlugar()const{
	return lugar;
}
string Secuestro::getmotivo()const{
	return motivo;
}
string Secuestro::getestado_victima()const{
	return estado_victima;
}
string Secuestro::getvictima()const{
	return victima;
}
bool Secuestro::getrescate()const{
	return rescate;
}
double Secuestro::getcantidad() const{
	return cantidad;
}
void Secuestro::setlugar(string x){
	this->lugar=x;
}
void Secuestro::setmotivo(string x){
	this->motivo=x;
}
void Secuestro::setestado_victima(string x){
	this->estado_victima=x;
}
void Secuestro::setvictima(string x){
	this->victima=x;
}
void Secuestro::setrescate(bool x){
	this->rescate=x;
}
void Secuestro::setcantidad(double x){
	this->cantidad=x;
}