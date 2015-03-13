#include "Evidencia.h"

#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]){
	int opcionMenuP;
	do{
		cout << "\t  ________.__                 .__                 __       ___ ___        .__                          .___                   " << endl;
		cout << "\t /   _____|  |__   ___________|  |   ____   ____ |  | __  /   |   \\  ____ |  |   _____   ____   ______ |   | ____   ____      " << endl;
		cout << "\t \\_____  \\|  |  \\_/ __ \\_  __ |  |  /  _ \\_/ ___\\|  |/ / /    ~    \\/  _ \\|  |  /     \\_/ __ \\ /  ___/ |   |/    \\_/ ___\\     " << endl;
		cout << "\t /        |   Y  \\  ___/|  | \\|  |_(  <_> \\  \\___|    <  \\    Y    (  <_> |  |_|  Y Y  \\  ___/ \\___ \\  |   |   |  \\  \\___     " << endl;
		cout << "\t/_______  |___|  /\\___  |__|  |____/\\____/ \\___  |__|_ \\  \\___|_  / \\____/|____|__|_|  /\\___  /____  > |___|___|  /\\___  > /\\ " << endl;
		cout << "        \\/     \\/     \\/                       \\/     \\/        \\/                   \\/     \\/     \\/           \\/     \\/  \\/ " << endl;
		cout << "";

		cout << "1) Gestion de Personal\n2) Gestion de Evidencia\n3) Gestion de Casos\n4) Salir\nIngrese su opcion: ";
		cin >> opcionMenuP;
		switch(opcionMenuP){
			case 1:{
				cout << "\t1)Personal Administrativo\n\t2)Investigador\n\t3)Forense\n\tIngrese una opcion: ";
			}
				break;
			case 2:{
				
			}
				break;
			case 3:{
				cout << "\t1)Homicidio\n\t2)Secuestro\n\tIngrese una opcion: ";
			}
				break;
			default:{
				cerr << "Opcion invalida." << endl;
			}
				break;
		}
	} while(opcionMenuP != 4);
	return 0;
}