/*
Autor: Miguel Dussán
*/

/*
Escriba un programa que utilizando una sola estructura repetitiva, imprima 
todos los números entre un rango determinado por el usuario, incluyendo esos dos 
números, con incrementos de n. El usuario puede ingresar los rangos inferior y 
superior en cualquier orden.
*/

#include <iostream>
	
using namespace std;

int main(){
	int rango_inferior = 0;
	int rango_superior = 0;
	int incremento = 0;
	int aux = 0;
	
	//Mensaje descriptivo del programa
	cout << "Este programa utiliza una sola estructura repetitiva para ";
	cout <<"imprimir todos los numeros entre un rango determinado por el ";
	cout <<"usuario, incluyendo esos dos numeros, con incrementos de n. El ";
	cout <<"usuario puede ingresar los rangos inferior y superior en ";
	cout<<"cualquier orden."<<endl<<endl;
	
	cout << "Primer numero del rango? ";
	cin >> rango_inferior;
	
	cout << "Segundo numero del rango? ";
	cin >> rango_superior;
	
	cout << "Incremento? ";
	cin >> incremento;
	
	if(rango_superior < rango_inferior){
		aux = rango_inferior;
		rango_inferior = rango_superior;
		rango_superior = aux;
	}

	while(rango_inferior <= rango_superior){
		cout << rango_inferior << " ";
		rango_inferior = rango_inferior + incremento;
	}
	
	cout << endl;
	
	cin.get();
	
	return 0;
}
