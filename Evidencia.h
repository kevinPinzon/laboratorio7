#pragma once

#include <string>
#include <iostream>

using namespace std;

class Evidencia{
	string nombre;
	string tipoObjeto;
	string lugar;
	bool huellas;
	bool process;
public:
	Evidencia(string, string, string, bool, bool);

	string getNombre()const;
	string getTipoObjeto()const;
	string getLugar()const;
	bool getHuellas()const;
	bool getProcess()const;

	void setNombre(string);
	void setTipoObjeto(string);
	void setLugar(string);
	void setHuellas(bool);
	void setProcess(bool);

	string toString()const;
};
