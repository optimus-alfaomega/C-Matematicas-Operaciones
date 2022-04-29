/*
Autor: Miguel Dussán
*/

/*
Este programa determina si un número entero es negativo
utilizando una estructura Sí-Entonces-Si no
*/

#include <iostream>
	
using namespace std;

int main(){
	int numero = 0;							//Declaración e inicialización
	
	//Mensaje que indica qué hace el programa
	cout << "Este programa determina si un numero entero es negativo ";
	cout << "utilizando una estructura Si-Entonces-Si no"<<endl<<endl;
	
	cout << "Escriba un numero: ";			//Impresión en pantalla
	cin >> numero;							//Captura por teclado del número
	
	if(numero<0){			//Estructura selectiva de una sola línea Sí-Entonces
		/*
		Puede escribirse opcionalemente sin llaves si el contenido
		del if es UNA SOLA LÍNEA; de otra forma se deben poner las
		llaves que definen el alcance del mismo.
		*/
		cout << "El numero es negativo";
	}
	else{								//Abre un Si No
		/*Código que se ejecuta si la 
			condición del if es falsa.
			Como tiene una sola línea, también
			podía escribirse sin llaves. Si el
		else tiene más de una línea, SE DEBEN AGREGAR LAS LLAVES */
		cout << "El numero es positivo";	
	}									//Cierra un Si No
	
	cin.get();
	
	return 0;
}
