#include "Evidencia.h"
#include "GestionCasos.h"
#include "Homicidio.h"
#include "GestionPersonal.h"
#include "Forense.h"
#include "Secuestro.h"
#include "Investigador.h"
#include "Personal_admin.h"

#include <vector>

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int opcionPersona();

int main(int argc, char const *argv[]){
    int opcionMenuP;
    vector<GestionCasos*> VECTORgestionCasos;
    vector<Evidencia*> VECTORevidencias;
    vector<GestionPersonal*> VECTORgestionPersonas;
    do{
        cout << "\t  ________.__                 .__                 __       ___ ___        .__                          .___                   " << endl;
        cout << "\t /   _____|  |__   ___________|  |   ____   ____ |  | __  /   |   \\  ____ |  |   _____   ____   ______ |   | ____   ____      " << endl;
        cout << "\t \\_____  \\|  |  \\_/ __ \\_  __ |  |  /  _ \\_/ ___\\|  |/ / /    ~    \\/  _ \\|  |  /     \\_/ __ \\ /  ___/ |   |/    \\_/ ___\\     " << endl;
        cout << "\t /        |   Y  \\  ___/|  | \\|  |_(  <_> \\  \\___|    <  \\    Y    (  <_> |  |_|  Y Y  \\  ___/ \\___ \\  |   |   |  \\  \\___     " << endl;
        cout << "\t/_______  |___|  /\\___  |__|  |____/\\____/ \\___  |__|_ \\  \\___|_  / \\____/|____|__|_|  /\\___  /____  > |___|___|  /\\___  > /\\ " << endl;
        cout << "        \\/     \\/     \\/                       \\/     \\/        \\/                   \\/     \\/     \\/           \\/     \\/  \\/ " << endl;
        cout << "";
        
        cout << "1) Gestion de Personal\n2) Gestion de Evidencia\n3) Gestion de Casos\n4) Ver Caso\n5) Salir\nIngrese su opcion: ";
        cin >> opcionMenuP;
        switch(opcionMenuP){//Aqui empieza 
            case 1:{
                cout << "\t1)Personal Administrativo\n\t2)Investigador\n\t3)Forense\n\tIngrese una opcion: ";
                int opcion;
                cin >> opcion;
                switch(opcion){
                    case 1:{//Empieza gestion de Personal
                        int opcionEditarPersona = opcionPersona();
                        switch(opcionEditarPersona){
                            case 1:{
                                string nombreReal, nombreUsuario, contrasena, fechaNacimiento;
                                int edad;
                                string identidad;
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
                                
                                switch(opcion){
                                    case 1:{
                                        string claveIngreso, puestoOrganigrama;
                                        cout << "Ingrese clave de Ingreso: ";
                                        cin >> claveIngreso;
                                        cout << "Ingrese puesto de organigrama: ";
                                        cin >> puestoOrganigrama;

                                        /*(string nombreReal,string nombreUsuario,string contrasena,int edad, string cedula_identidad,string fecha_nacimiento, 
                                            string clave_ingreso, string puesto_orga)
                                            */
                                        Personal_admin* miPersona = new Personal_admin(nombreReal, nombreUsuario, contrasena, edad, identidad, fechaNacimiento, claveIngreso,
                                            puestoOrganigrama);
                                        VECTORgestionPersonas.push_back(miPersona);
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
                                        /*(string nombreReal,string nombreUsuario,string contrasena,int edad, string cedula_identidad,string fecha_nacimiento,
                                        int casosAtendidos,int casosCerrados,int casosAbiertos)*/
                                        Investigador* miInvestigador = new Investigador(nombreReal, nombreUsuario, contrasena, edad, identidad, fechaNacimiento, 
                                            casosAtendidos, casosCerrados, casosSinResolver);
                                        VECTORgestionPersonas.push_back(miInvestigador);
                                    }
                                        break;
                                    case 3:{
                                        string fechaIngreso, horarioTrabajo;
                                        cout << "Ingrese la fecha de ingreso: ";
                                        cin >> fechaIngreso;
                                        cout << "Ingrese el horario de trabajo: ";
                                        cin >> horarioTrabajo;
                                        /*string nombreReal,string nombreUsuario,string contrasena,int edad, string cedula_identidad,string fecha_nacimiento,
                                        string fecha_ingreso,string horario*/
                                        Forense* miForense = new Forense(nombreReal, nombreUsuario, contrasena, edad, identidad, fechaNacimiento,
                                            fechaIngreso, horarioTrabajo);
                                        VECTORgestionPersonas.push_back(miForense);
                                    }
                                        break;
                                    default:
                                        cout << "Opcion invalida." << endl;
                                        opcionEditarPersona = opcionPersona();
                                }
                            }
                                break;
                            case 2:{
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
                            case 3:{
                                for (int i = 0; i < VECTORgestionPersonas.size(); ++i){
                                    cout << i << ") " << VECTORgestionPersonas[i]->toString() << endl;
                                }
                                cout << "Ingrese cual desea eliminar: " << endl;
                                int eliminar;
                                cin >> eliminar; 
                                VECTORgestionPersonas.erase(VECTORgestionPersonas.begin(), VECTORgestionPersonas.begin()+eliminar);
                            }
                                break;
                            //default:
                                
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
                //int opcionEditarPersona = opcionPersona();
                
            }
                break;
            case 2:{ //Empieza gestion de Evidencia
                int opcionEditar = opcionPersona();
                switch(opcionEditar){
                    case 1:{
                        string nombreObjeto, tipo, lugar;
                        bool huellas, procesada;
                        cout << "Ingrese el nombre del objeto: ";
                        cin >> nombreObjeto;
                        cout << "Ingrese el tipo de objeto:\n1) Arma Blanca\n2) De Fuego\n3) Evidencia Circunstancial\n ";
                        int a;
                        cin >> a;
                        if(a == 1)
                            tipo ="Arma Blanca";
                        else if(a == 2)
                            tipo = "De Fuego";
                        else
                            tipo = "Evidencia Circunstancial";
                        cout << "Ingrese el lugar: ";
                        cin >> lugar;
                        cout << "Encontro huellas?: [si/no]";
                        string l;
                        cin >> l;
                        if (l == "si")
                            huellas = true;
                        else
                            huellas = false;
                        cout << "Fue procesada?: [si/no]";
                        string q;
                        cin >> q;
                        if (q == "si")
                            procesada = true;
                        else
                            procesada = false;
                        //(string nombre, string tipoObjeto, string lugar, bool huellas, bool process)
                        Evidencia* miEvidencia = new Evidencia(nombreObjeto, tipo, lugar, huellas, procesada);
                        VECTORevidencias.push_back(miEvidencia);
                    }
                        break;
                    case 2:{
                        
                    }
                        break;
                    case 3:{
                        /*for (int i = 0; i < vector.size(); ++i){
                                    cout << i << ") " << vector[i] << endl;
                                }
                                cout << "Ingrese cual desea eliminar: " << endl;
                                int eliminar;
                                cin >> eliminar; */
                    }
                        break;
                }
            }
                break;
            case 3:{ //Empieza gestion de Casos
                
                cout << "\t1)Homicidio\n\t2)Secuestro\n\tIngrese una opcion: ";
                int opcion;
                cin >> opcion;
                bool abierto;
                string r;
                cout << "Esta cerrado el caso? [si/no]" << endl;
                cin >> r;
                int opcionCaso;
                string hora, fecha;
                if(r == "si" || r == "Si" || r == "SI" || r == "sI")
                    abierto = true;
                else
                    abierto = false;
                vector<Investigador>* miInvestigadores;
                /*for (int i = 0; i < VECTORgestionPersonas.size(); ++i){
                     if (Homicidio* t = dynamic_cast<Homicidio*>( VECTORgestionCasos[i] )){
                        cout << "Ingrese el investigador que desea agregar: " << endl;
                        cout << i << ") " << VECTORgestionCasos[i]->toString() << endl;
                        //atentidos, cerrados, abiertos,    nombrReal, nombre usuario, contrasena, edad, cedula, fechanac
                        int atentidos = ((Investigador)VECTORgestionPersonas[i])->getCasosAtentidos();
                        int cerrados = ((Investigador)VECTORgestionPersonas[i])->getcasos_cerrados();
                        int abiertos = ((Investigador)VECTORgestionPersonas[i])->getCasosAbiertos();
                        string nombrReal = ((Investigador)VECTORgestionPersonas[i])->getNombreReal();
                        string nombreUsuario = ((Investigador)VECTORgestionPersonas[i])->getNombreUsuario();
                        string contrasena = ((Investigador)VECTORgestionPersonas[i])->getContrasena();
                        int edad = ((Investigador)VECTORgestionPersonas[i])->getEdad();
                        string cedula = ((Investigador)VECTORgestionPersonas[i])->getCedula_identidad();
                        string fecha = ((Investigador)VECTORgestionPersonas[i])->getfecha();
                        Investigador* i = new Investigador(atentidos, cerrados, abiertos, nombrReal, nombreUsuario, contrasena, edad, cedula, fecha);
                        miInvestigadores->push_back(i);
                     }
                }*/
                vector<Evidencia>* miEvidencias;
                /*for (int i = 0; i < VECTORgestionCasos.size(); ++i){
                     if (Homicidio* t = dynamic_cast<Homicidio*>( VECTORgestionCasos[i] )){
                        cout << "Ingrese el investigador que desea agregar: " << endl;
                        cout << i << ") " << VECTORevidencias[i]->toString() << endl;
                        miEvidencias->push_back(*VECTORevidencias[i]);
                     }
                }*/
                cout << "Ingrese el numero de caso: " << endl;
                int casoNum;
                cin >> casoNum;
                cout << "Ingrese la hora: " << endl;
                cin >> hora;
                cout << "Ingrese la fecha: " << endl;
                cin >> fecha;
                switch(opcion){
                    case 1:{
                        int opcionEditar = opcionPersona();
                        switch(opcionEditar){
                            case 1:{
                                string nombrePrincipal, victima;
                                char continuar = 's';
                                string nomb;
                                vector<string> nombres;
                                while(continuar == 's'){
                                    cout << "Ingrese el nombre: ";
                                    cin >> nomb;
                                    nombres.push_back(nomb);
                                    cout << "Continuar? [s/n] " << endl;
                                    cin >> continuar;
                                }
                                cout << "Ingrese el nombre del sospechoso principal: " << endl;
                                cin >> nombrePrincipal;
                                cout << "Ingrese el nombre de la victima: " << endl;
                                cin >> victima;
                                /*
                                (int numero_caso, vector<Investigador>*investigador,vector<Evidencia>*evidencia, string hora ,string fecha,bool caso_cerrado //c
                                ,vector<string> lista_nombres ,string sospechoso_principal ,string victima):GestionCasos(numero_caso, 
                                investigador,evidencia,  hora , fecha, caso_cerrado)
                                */
                                Homicidio* hom = new Homicidio(casoNum, miInvestigadores, miEvidencias, hora, fecha, abierto, nombres, nombrePrincipal, victima);
                                VECTORgestionCasos.push_back(hom);
                            }   
                                break;
                                case 2:{//modificar homicidios
                               cout<<"no hay modificar";
                            }
                                break;
                            case 3:{//eliminar homocidios
                                for (int i = 0; i < VECTORgestionCasos.size(); ++i)
                                    cout << i << ") " << VECTORgestionCasos[i] << endl;
                                
                                cout << "Ingrese cual desea eliminar: " << endl;
                                int eliminar;
                                cin >> eliminar; 
                                 VECTORgestionCasos.erase(VECTORgestionCasos.begin(), VECTORgestionCasos.begin()+eliminar);
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
                        switch(opcionEditar){
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
                                    cin >> res;
                                    if(res == "si" || res == "Si" || res == "SI" || res == "sI")
                                        estado = true;
                                    else
                                        estado = false;
                                } else
                                    estado = false;
                                    /*
                                    (int numero_caso, vector<Investigador>*investigador,vector<Evidencia>*evidencia, string hora ,string fecha,bool caso_cerrado,
                                     string victima,string lugar ,string motivo ,bool rescate)
                                     :GestionCasos(numero_caso, investigador,evidencia,  hora , fecha, caso_cerrado)
                                     */

                            }   
                                break;
                            case 2:{//modificar secuestros
                                cout<<"no hay modificar";     
                            }
                                break;
                            case 3:{//eliminar secuestros
                             for (int i = 0; i < VECTORgestionCasos.size(); ++i)
                                    cout << i << ") " << VECTORgestionCasos[i] << endl;
                                
                                cout << "Ingrese cual desea eliminar: " << endl;
                                int eliminar;
                                cin >> eliminar; 
                                VECTORgestionCasos.erase(VECTORgestionCasos.begin(), VECTORgestionCasos.begin()+eliminar);
                            }
                                break;
                            default: 
                                cout << "Opcion invalida." << endl; 
                                opcionEditar = opcionPersona();
                        }
                    }
                        break;
                    //default:
                }
            }
                break;
            case 4:{
                if(VECTORgestionCasos.size()<1){
                    cout << "No hay casos" << endl;
                    break;
                }
                for (int i = 0; i < VECTORgestionCasos.size(); ++i){
                    cout << i+1 << ") " << VECTORgestionCasos[i]->toString() << endl;
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