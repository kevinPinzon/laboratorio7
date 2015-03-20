#ifndef Secuestro_H
#define Secuestro_H
# include <vector>
#include "GestionCasos.h"
#include "Evidencia.h"
#include "Investigador.h"
#include <string>
using namespace std;


class Homicidio : public GestionCasos{
	string victima;
	string lugar;
	string motivo;
	bool rescate;
	double cantidad;
	string estado_victima;
	
	// caso cerrado esta en clase padre

public:
secuestro(int, vector<Investigador>,vector<Evidencia>, string,string,bool ,
	string ,string ,string ,bool);
secuestro(const Secuestro&);
virtual string toString ()const;
string getlugar()const;
string getmotivo()const;
string getestado_victima()const;
string getvictima()const;
bool getrescate()const;
double getcantidad() const;
void setlugar(string);
void setmotivo(string);
void setestado_victima(string);
void setvictima(string);
void setrescate(bool);
void setcantidad(double);
};

#endif