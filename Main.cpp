#include "Evidencia.h"

#include <iostream>
#include <sstream>

using namespace std;

int opcionPersona();

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
                int opcion;
                cin >> opcion;
                switch(opcion){
                    case 1:{
                        int opcionEditarPersona = opcionPersona();
                        switch(opcionEditarPersona){
                            case 1:{
                                string nombreReal, nombreUsuario, contrasena, fechaNacimiento;
                                int edad;
                                long int identidad;
                                cout << "Ingrese el nombre: ";
                                cin >> nombreReal;
                                cout << "Ingrese el nombre de usuario: ";
                                cin >> nombreUsuario;
                                cout << "Ingrese la contrasena: ";
                                cin >> contrasena;
                                cout << "Ingrese la edad: ";
                                cin >> edad;
                                cout << "Ingrese la cedula de identidad: ";
                                cin >> identidad;
                                cout << "Ingrese fecha de nacimiento: ";
                                cin >> fechaNacimiento;
                                
                                switch(opcionEditarPersona){
                                    case 1:{
                                        string claveIngreso, puestoOrganigrama;
                                        cout << "Ingrese clave de Ingreso: ";
                                        cin >> claveIngreso;
                                        cout << "Ingrese puesto de organigrama: ";
                                        cin >> puestoOrganigrama;
                                        
                                    }
                                        break;
                                    case 2:{
                                        int casosAtendidos, casosCerrados, casosSinResolver;
                                        cout << "Ingrese la cantidad de casos atendidos: ";
                                        cin >> casosAtendidos;
                                        cout << "Ingrese la cantidad de casos cerrados: ";
                                        cin >> casosCerrados;
                                        cout << "Ingrese la cantidad de casos sin resolver: ";
                                        cin >> casosSinResolver;
                                    }
                                        break;
                                    case 3:{
                                        string fechaIngreso, horarioTrabajo;
                                        cout << "Ingrese la fecha de ingreso: ";
                                        cin >> fechaIngreso;
                                        cout << "Ingrese el horario de trabajo: ";
                                        cin >> horarioTrabajo;
                                    }
                                        break;
                                    default:
                                        cout << "Opcion invalida." << endl;
                                        opcionEditarPersona = opcionPersona();
                                }
                            }
                                break;
                            case 2:{
                                
                            }
                                break;
                            case 3:{
                                
                            }
                                break;
                            default:
                                
                        }
                    }
                        break;
                    case 2:{
                        int opcionEditarPersona = opcionPersona();
                    }
                        break;
                    case 3:{
                        int opcionEditarPersona = opcionPersona();
                    }
                        break;
                }
                int opcionEditarPersona = opcionPersona();
                
            }
                break;
            case 2:{
                int opcionEditar = opcionPersona();
                switch(opcionEditar){
                    case 1:{
                        string nombreObjeto, tipo, lugar;
                        bool huellas, procesada;
                        cout << "Ingrese el nombre del objeto: ";
                        cin >> nombreObjeto;
                        cout << "Ingrese el tipo de objeto:\n1) Arma Blanca\n2) De Fuego\n3) Evidencia Circunstancial\n ";
                        
                        cin >> nombreUsuario;
                        cout << "Ingrese la contrasena: ";
                        cin >> contrasena;
                        cout << "Ingrese la edad: ";
                        cin >> edad;
                    }
                        break;
                    case 2:{
                        
                    }
                        break;
                    case 3:{
                        
                    }
                        break;
                }
            }
                break;
            case 3:{
                if(#lista.size() < 1 ){
                    cout << "no hay investigadores"
                    break;
                }
                
                cout << "\t1)Homicidio\n\t2)Secuestro\n\tIngrese una opcion: ";
                int opcion;
                cin >> opcion;
                bool abierto;
                string r;
                cout << "Esta cerrado el caso? [si/no]" << endl;
                cin >> r;
                if(r == "si" || res == "Si" || res == "SI" || res == "sI")
                    abierto = true;
                else
                    abierto = false;
                switch(opcion){
                    case 1:{
                        int opcionEditar = opcionPersona();
                        switch(opcionEditar){
                            case 1:{
#vecto
                                string nombrePrincipal, victima;
                                char continuar = 's';
                                string nomb;
                                while(continuar == 's'){
                                    cout << "Ingrese el nombre: ";
                                    cin >> nomb;
                                    vecotr.puch(nomb);
                                    cout << "Continuar? [s/n] " << endl;
                                    cin >> s;
                                }
                                cout << "Ingrese el nombre del sospechoso principal: " << endl;
                                cin >> nombrePrincipal;
                                cout << "Ingrese el nombre de la victima: " << endl;
                                cin >> victima;
                            }	
                                break;
                            case 2:{
                                
                            }
                                break;
                            case 3:{
                                
                            }
                                break;
                            default: 
                                cout << "Opcion invalida." << endl; 
                                opcionEditar = opcionPersona();
                        }
                    }
                        break;
                    case 2:{
                        int opcionEditar = opcionPersona();
                        switch(opciononEditar){
                            case 1:{
                                string victima, lugar, motivo, res;
                                bool rescate;
                                bool estado;
                                cout << "Ingrese el nombre de la victima: " << endl;
                                cin >> victima;
                                cout << "Ingrese el nombre del lugar: " << endl;
                                cin >> lugar;
                                cout << "Ingrese el motivo: " << endl;
                                cin >> motivo;
                                cout << "Se pide rescate?: [si/no]" << endl;
                                cin >> res;
                                if(res == "si" || res == "Si" || res == "SI" || res == "sI"){
                                    rescate = true;
                                } else
                                    rescate = false;
                                if(abierto == true){
                                    cout << "Se encuentra la victima con vida?" << endl;
                                    cin res;
                                    if(res == "si" || res == "Si" || res == "SI" || res == "sI")
                                        estado = true;
                                    else
                                        estado = false;
                                } else
                                    estado = false;
                            }	
                                break;
                            case 2:{
                                
                            }
                                break;
                            case 3:{
                                
                            }
                                break;
                            default: 
                                cout << "Opcion invalida." << endl; 
                                opcionEditar = opcionPersona();
                        }
                    }
                        break;
                    default:
                }
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

int opcionPersona(){
    int respuesta;
    cout << "1) Agregar\n2) Editar\n3) Eliminar\nIngrese una opcion: " << endl;
    cin >> respuesta;
    return respuesta;
}