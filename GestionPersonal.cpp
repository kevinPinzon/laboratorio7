#include "GestionPersonal.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

GestionPersonal::GestionPersonal(string nombreReal,string nombreUsuario,string contrasena,int edad,
	string cedula_identidad,string fecha_nacimiento): 
nombreReal(nombreReal), nombreUsuario(nombreUsuario), contrasena(contrasena),edad(edad),
cedula_identidad(cedula_identidad),fecha_nacimiento(fecha_nacimiento)
{

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
