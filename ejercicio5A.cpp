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
#include <string>
using namespace std;

void convertir(int n){
	
	int residuo = 0;
	string resultado = "";
	string resultadoInverso = ""; 
	//ostringstream convertidor; --> error: aggregate ‘std::ostringstream convertidor’ has incomplete type and cannot be defined
	
	while(n>=2){
		
		residuo = n%2;
		//resultado.append(residuo);
		//resultado += to_string(residuo); ---> solo funciona en C++11
		//resultado += static_cast<ostringstream*>( &(ostringstream() << residuo) )->str();
		//convertidor << residuo;
		//resultado += convertidor.str();
		//char convertir = itoa(residuo); -->  error: ‘itoa’ was not declared in this scope
		//resultado += string(convertir);
		
		if (residuo == 0){
			
			resultado += "0";
			
			} else {
				
				resultado += "1";
				
				}

		n=n/2;
		
		}
	
	//resultado.append(n);
	//resultado += to_string(n); ---> solo funciona en C++11
	//resultado += static_cast<ostringstream*>( &(ostringstream() << n) )->str();
	//convertidor << n;
	//resultado += convertidor.str();
	//char convertir2 = itoa(n); --->  error: ‘itoa’ was not declared in this scope
	//resultado += string(convertir2);
	
	if (n == 0){
			
			resultado += "0";
			
			} else {
				
				resultado += "1";
				
				}
	
	for(int i = sizeof(resultado)/sizeof(int); i>0; i--){
		
		resultadoInverso += resultado[i];
		
		}
	
	cout << "La conversión binaria es: \n" << resultadoInverso << endl;
	
}
	
int main(){
	
	int numero = 0;
	
	cout << "Ingrese un numero para convertir: " << endl;
	cin >> numero;
	
	convertir(numero);

		
}
