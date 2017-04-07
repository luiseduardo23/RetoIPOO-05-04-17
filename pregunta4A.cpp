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
//   que nos permite almacenar dos tipos de datos, un codigo y un numero.

//B)
void agregarProducto(string productoT, double cantidadT,map<string,double> &inventarioT){
	
	bool validador=0;
	
	for(map<string,double>:: iterator it= inventarioT.begin(); it!=inventarioT.end();++it){
		
		if(it->first == productoT){
			inventarioT[it->first]=(cantidadT + it->second);
			validador=1;
		}	
	}
	
	if (validador == 0){
		inventarioT[productoT]=cantidadT;
	}
	
}

//C)
void venta(string productoV, double cantidadV, map<string,double>&inventarioV, map<string,double> &historialV){
	
	bool validador=0;
	
	 for(map<string,double>:: iterator it= inventarioV.begin(); it!=inventarioV.end();++it){
		
		if(it->first == productoV && (it->second- cantidadV)>0 ){
				historialV[it->first]=cantidadV;
				inventarioV[it->first]=(it->second - cantidadV);
			validador=1;
			}					
	}
	
	if(validador==0){
		cout << "No tenemos esa cantidad de producto a la venta o el producto ingresado no existe" << endl;
	}				
}
	 



int main(){
	
	map<string,double>productosInventario; // Creo un inventario de productos predefinidos para las funciones de arriba
	
	productosInventario["A12B"]=20;
	productosInventario["AASDB"]=20;
	productosInventario["RER32B"]=20;
	
	map<string,double>historialVentas; // Creo un historial de ventas predefinidos para las funciones de arriba
	
	historialVentas["A12B"]=2;
	historialVentas["AASDB"]=6;
	historialVentas["RER32B"]=8;
	
	
	cout << "pregunta B: " << endl;
	
	cout << "ingrese un producto para demostrar la pregunta b:" << endl;
	string productoX="";
	cin >> productoX;
	
	cout << "ingrese una cantidad para demostrar la pregunta b:" << endl;
	double cantidadX=0;
	cin >> cantidadX;
	//solo pido dos datos ya que el inventario ya se predefinio, y aplico la función.
	agregarProducto(productoX,cantidadX,productosInventario);
	
	
	cout << "pregunta C: " << endl;
	
	cout << "ingrese un producto para demostrar la pregunta c:" << endl;
	string productoY="";
	cin >> productoY;
	
	cout << "ingrese una cantidad para demostrar la pregunta c:" << endl;
	double cantidadY=0;
	cin >> cantidadY;
	//solo pido dos datos ya que el inventario y el historial ya se predefinio, y aplico la función.
	venta(productoY, cantidadY, productosInventario, historialVentas);
}
