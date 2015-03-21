#ifndef Homicidio_H
#define Homicidio_H
#include <vector>
#include "GestionCasos.h"
#include "Evidencia.h"
#include "Investigador.h"
#include <string>

using namespace std;

class Homicidio : public GestionCasos{
	vector<string>lista_nombres;
	string sospechoso_principal;
	string culpable;
	string victima;

public:
Homicidio(int, vector<Investigador>*,vector<Evidencia>*, string,string,bool,vector<string> , string ,string);
Homicidio(const Homicidio&);
~Homicidio();
virtual string toString()const;
vector<string> getlista_nombres()const;
string getsospechoso_principal()const;
string getculpable()const;
string getvictima()const;
void setlista_nombre(vector<string>);
void setsospechoso_principal(string);
void setculpable(string);
void setvictima(string);
}; 

#endif