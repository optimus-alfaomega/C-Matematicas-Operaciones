/*
Autor: Miguel Dussán
*/

/*
Escriba un programa que permita al usuario introducir N números enteros, y 
permita determinar el mayor y el menor de los números introducidos.
*/

#include <iostream>

/*
Esta biblioteca se utiliza para extraer la constante del número más grande
y más pequeño del tipo int
*/
#include <climits> 
	
using namespace std;

int main(){
	int cantidad_numeros = 0;
	int numero = 0;
	int numero_mayor = INT_MIN;	//Constante que indica el número más pequeño de
								//los enteros
								//Se asigna este valor para que cualquier 
								//número lo supere y sea, en principio, el mayor
	int numero_menor = INT_MAX;	//Constante que indica el número más pequeño de 
								//los enteros. Se asigna este valor para que 
								//cualquier número sea menor
	int contador = 0;
	
	//Mostrar explicación del programa
	cout << "Este programa permite al usuario introducir N numeros enteros, y"; 
	cout <<"determinar el mayor y el menor de los numeros introducidos.";
	cout<<endl<<endl;
	
	//Pedir la cantidad de números
	cout << "Cuantos numeros desea ingresar? ";
	cin >> cantidad_numeros;
	
	//Mientras el contador sea menor a la cantidad de números
	while(contador < cantidad_numeros){	
		cout << "Numero? ";				//Pedir un número
		cin >> numero;
		
		// Revisar si este número es mayor al número más grande guardado
		if(numero > numero_mayor)		
			//Si es mayor, se guarda como el mayor de los ingresados
			numero_mayor = numero;		
		
		// Revisar si este número es menor al número más pequeño guardado
		if(numero < numero_menor){
			//Si es menor, se guarda como el menor de los ingresados
			numero_menor = numero;		
		}
		/*
		Operador unario, que incrementa en 1 del contador.
		Equivalente a: 
		contador = contador + 1;
		*/
		contador++;						
	}
	
	//Mostrar los números en pantalla
	cout << "El numero mayor entre los ingresados es: " << numero_mayor << endl;
	cout << "El numero menor entre los ingresados es: " << numero_menor << endl;
	
	cin.get();
	
	return 0;
}
