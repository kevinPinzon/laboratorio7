exe:	Main.o Homicidio.o secuestro.o GestionCasos.o Evidencia.o Forense.o Investigador.o Personal_admin GestionPersonal.o 
	g++ Main.o Homicidio.o secuestro.o GestionCasos.o Evidencia.o Forense.o Investigador.o Personal_admin.o GestionPersonal.o -o exe

main.o : main.cpp Homicidio.h secuestro.h GestionCasos.h Evidencia.h Forense.h Investigador.h Personal_admin.h GestionPersonal.h
	g++-c Main.cpp

Homicidio.o : Homicidio.cpp Homicidio.h GestionCasos.h
	g++ -c Homicidio.cpp

secuestro.o : secuestro.cpp secuestro.h GestionCasos.h
	g++ -c secuestro.cpp

GestionCasos.o : GestionCasos.cpp GestionCasos.h Evidencia.h Investigador.h
	g++ -c secuestro.cpp

Evidencia.o : Evidencia.cpp Evidencia.h 
	g++ -c Evidencia.cpp

Forense.o : Forense.cpp Forense.h GestionPersonal.h
	g++ -c Forense.cpp

Investigador.o : Investigador.cpp Investigador.h GestionPersonal.h
	g++ -c Investigador.cpp

Personal_admin.o : Personal_admin.cpp Personal_admin.h GestionPersonal.h
	g++ -c Personal_admin.cpp

GestionPersonal.o : GestionPersonal.cpp GestionPersonal.h 
	g++ -c GestionPersonal.cpp