/*
Autor: Miguel Dussán
*/

/*
Diseñe un algoritmo que dado el número ingresado por el usuario, muestre en 
pantalla el día de la semana al que corresponde (ejemplo: 3 es miércoles, 
7 es domingo). Si el usuario ingresa una opción distinta a los números de la 
semana, deberá mostrar un mensaje de error.
*/

#include <iostream>
	
using namespace std;

int main(){
	int numero_dia=0;
	
	//Mensaje descriptivo
	cout << "Este programa muestra en pantalla el dia de la semana al que ";
	cout << "corresponde el numero ingresado por el usuario (ejemplo: 3 es ";
	cout << "miercoles, 7 es domingo). Si el usuario ingresa una opcion ";
	cout << "distinta a los numeros de la semana, debera mostrar un mensaje de";
	cout <<" error."<<endl<<endl;

	cout << "Numero de dia de la semana? ";
	cin >> numero_dia;
	
	//Estructura de selección múltiple
	//Se examina el valor de la variable numero_dia
	switch(numero_dia){
		case 1: 										//Si la variable tiene valor 1
			cout << "Lunes" << endl;	//Imprime "Lunes"
			break;										//Termina el bloque que se ejecuta para el caso 1
		case 2: 										//Si la variable tiene valor 2
			cout << "Martes"<< endl;  //Imprime "Martes"
			break;										//Termina el bloque que se ejecuta para el caso 2
		case 3: 										//Si la variable tiene valor 3
			cout << "Miercoles"<< endl;	//Imprime "Miércoles"
			break;										//Termina el bloque que se ejecuta para el caso 3
		case 4: 										//Si la variable tiene valor 4
			cout << "Jueves"<< endl;	//Imprime "Jueves"
			break;										//Termina el bloque que se ejecuta para el caso 4
		case 5: 										//Si la variable tiene valor 5
			cout << "Viernes"<< endl;	//Imprime "Viernes"
			break;										//Termina el bloque que se ejecuta para el caso 5
		case 6: 										//Si la variable tiene valor 6
			cout << "Sabado"<< endl;	//Imprime "Sabado"
			break;										//Termina el bloque que se ejecuta para el caso 6
		case 7: 										//Si la variable tiene valor 7
			cout << "Domingo"<< endl;	//Imprime "Domingo"
			break;										//Termina el bloque que se ejecuta para el caso 7
		default: 										//Si  el usuario escribe otro número
			cout << "No existe un dia asociado a ese numero"<< endl;		//Imprime "Error"
			break;										//termina el bloque que se ejecuta si no coinciden las opciones anteriores
	}
	
	cin.get();
	
	return 0;
}
