#include "GestionPersonal.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

GestionPersonal::GestionPersonal(string nombreReal,string nombreUsuario,string contrasena,int edad,
	string cedula_identidad,string fecha_nacimiento){
	this->nombreReal=nombreReal;
	this->nombreUsuario=nombreUsuario;
	this->contrasena=contrasena;
	this->edad=edad;
	this->cedula_identidad=cedula_identidad;
	this->fecha_nacimiento=fecha_nacimiento;

}
GestionPersonal::GestionPersonal(const GestionPersonal& other):
nombreReal(other.nombreReal), nombreUsuario(other.nombreUsuario), contrasena(other.contrasena),edad(other.edad),
cedula_identidad(other.cedula_identidad),fecha_nacimiento(other.fecha_nacimiento)
{

}
string GestionPersonal::toString()const{
	stringstream ss;
	ss<<"\nnombre real: "<<nombreReal<<" con cedula de identidad: "<<cedula_identidad;
	return ss.str();
}
string GestionPersonal::getNombreReal()const{
	return nombreReal;
}
string GestionPersonal::getNombreUsuario()const{
	return nombreUsuario;
}
string GestionPersonal::getContrasena()const{
	return contrasena;
}
int GestionPersonal::getEdad()const{
	return edad;
}
string GestionPersonal::getCedula_identidad()const{
	return cedula_identidad;
}
string GestionPersonal::getFecha_nacimiento()const{
	return fecha_nacimiento;
}

void GestionPersonal::setNombreReal(string nombreReal){
	this->nombreReal=nombreReal;
}
void GestionPersonal::setNombreUsuario(string nombreUsuario){
	this->nombreUsuario=nombreUsuario;
}
void GestionPersonal::setContrasena(string contrasena){
	this->contrasena=contrasena;
}
void GestionPersonal::setEdad(int edad){
	this->edad=edad;
}
void GestionPersonal::setCedula_identidad(string cedula_identidad){
	this->cedula_identidad=cedula_identidad;
}
void GestionPersonal::setFecha_nacimiento(string fecha_nacimiento){
	this->fecha_nacimiento=fecha_nacimiento;
}
