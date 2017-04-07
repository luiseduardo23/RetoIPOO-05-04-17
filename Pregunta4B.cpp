/*
 *Autor 1:					Jorge Augusto Estacio
 *Autor 2:					Juan Camilo Patiño
 *Autor 3:					Luis Eduardo Henao
 *Archivo:					ejerecicio5A.cpp
 *Descripcion:				ejercicio numero 5 del parcial A
 *Fecha de creación:		05/04/17
 *Fecha de modificación:	05/04/17
 */

#include <iostream>
#include <map>
#include <string>

using namespace std;

//A) Para este trabajo decidimos utilizar la estructura de datos map, ya
//   que nos permite almacenar dos tipos de datos, un entero y un double, y un string  y un double.


//B)
void agregarEmpleado(int empleadoX, map<int,double> &registroE){
	
	bool validador=0;
	
	for(map<int,double>:: iterator it= registroE.begin(); it!=registroE.end();++it){
		
		if(it->first == empleadoX){
			cout<< "error: el empleado ya esta registrado" << endl;
			validador=1;
		}	
	}
	
	if (validador == 0){
		registroE[empleadoX]=0;
	}

}

//C
void vender(string codigoX, int empleadoX, double totalV, map<int,double> &registroE,  map<string,double> &historialV){
	
	int validador=0;
	double ventaEmpleado=0;
	
	for(map<int,double>:: iterator it= registroE.begin(); it!=registroE.end();++it){
		
		if(it->first == empleadoX){
			validador=1;
			ventaEmpleado= it->second;
		}
	}
	
	if(validador==1){
		for(map<string,double>:: iterator it= historialV.begin(); it!=historialV.end();++it){
			if(it->first == codigoX){
				historialV[it->first]=(it->second + totalV);
				validador=2;
			}
		}
		registroE[empleadoX]=(ventaEmpleado + totalV);
	}else{
	cout<< "el empleado  no existe" << endl;	
		}
		
	if(validador==2){
		historialV[codigoX]=totalV;
	}
}


int main(){
	map<int,double>registroEmpleados; 
	
	registroEmpleados[3232323]=20;
	registroEmpleados[32325345]=23;
	registroEmpleados[65345354]=24;
	
	map<string,double>historialVentas; 
	
	historialVentas["A12Bad"]=2;
	historialVentas["AASDBsa"]=6;
	historialVentas["RERfd32B"]=8;
	
}
	
