/*
Autor: Miguel Dussán
Fecha: Mar 18, 2013 9:16 PM
*/

/*
Este programa determina si un número entero es negativo
utilizando una estructura Sí-Entonces
*/

#include <iostream>
	
using namespace std;

int main(){
	int numero = 0;
	
	//Mensaje explicando el programa
	cout << "Este programa determina si un numero entero es negativo ";
	cout<<"utilizando una estructura Si-Entonces"<<endl<<endl;
	
	cout << "Escriba un numero: ";
	cin >> numero;
	/*
		Estructura selectiva Sí-Entonces (If).
		El alcance de la estructura se identifica porque abre y cierra 
		llaves ({}).
		La condición para que ejecute el código dentro de la estructura es
		que el número sea menor que cero.
	*/
	if(numero<0){			//Abre la estructura
		//Imprime un mensaje si el número es negativo
		cout << "El numero es negativo";
	}									//Cierra la estructura
	
	cin.get();
	
	return 0;
}
