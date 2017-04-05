/*
 *Autor 1:					Jorge Augusto Estacio
 *Autor 2:					Juan Camilo Patiño
 *Autor 3:					Luis Eduardo Henao
 *Archivo:					ejerecicio5B.cpp
 *Descripcion:				ejercicio numero 5 del parcial B
 *Fecha de creación:		05/04/17
 *Fecha de modificación:	05/04/17
 */

#include <iostream>
#include <string>
using namespace std;

void convertir(int n){
	
	int residuo = 0;
	string resultado = "";
	string resultadoInverso = ""; 
	
	while(n>=8){
		
		residuo = n%8;
		resultado += to_string(residuo); //solo funciona en C++11
		n = n/8;
		
		}
	
	resultado += to_string(n); //solo funciona en C++11
	
	for(int i = sizeof(resultado)/sizeof(int); i>0; i--){
		
		resultadoInverso += resultado[i];
		
		}
	
	cout << "La conversión octal es: \n" << resultadoInverso << endl;
	
	}
	
int main(){
	
	int numero = 0;
	
	cout << "Ingrese un numero para convertir: " << endl;
	cin >> numero;
	
	convertir(numero);

		
}
