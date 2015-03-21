#ifndef GestionCasos_H
#define GestionCasos_H
#include "Evidencia.h"
#include "Investigador.h"

#include <string>
#include <vector>

using namespace std;

class GestionCasos {
	
	int numero_caso;
	vector<Investigador>* investigador;
	vector<Evidencia>* evidencia;
	string hora;
	string fecha;
	bool caso_cerrado;

public:
GestionCasos(int, vector<Investigador>*,vector<Evidencia>*, string,string,bool);
GestionCasos();
virtual string toString ()const;
int getnumero_caso()const;
vector<Investigador>* getinvestigador()const;
vector<Evidencia>* getevidencia()const;
string gethora()const;
string getfecha()const;
bool getcaso_cerrado()const;
void setnumero_caso(int);
void setinvestigador(vector<Investigador>*);
void setevidencia(vector<Evidencia>*);
void setfecha(string);
void sethora(string);
void setcaso_cerrado(bool);



}; 

#endif
