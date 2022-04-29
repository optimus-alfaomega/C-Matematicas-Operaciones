/*
Autor: Miguel Duss�n
*/

/*
Dise�e un programa que emule un control de acceso. El programa debe preguntar al
usuario por una contrase�a alfanum�rica (es decir, que puede contener n�meros y 
letras) y verificar si la contrase�a es correcta. El usuario dispondr� de tres 
intentos para acertar la contrase�a. Si el usuario escribe la contrase�a de 
forma correcta, el programa debe mostrar un mensaje que diga: Acceso concedido; 
de lo contrario mostrar� el mensaje: Acceso denegado. La contrase�a que estar� 
preestablecida en el sistema ser�: A123.
*/

#include <iostream>
	
using namespace std;

int main(){
	//Declaraci�n e inicializaci�n de cadenas
	string passw_control="A123";	//Cadena con contrase�a del sistema
	string passw_digitado = "";		//Cadena que guardar� el password del usuario
	
	//Mensaje descriptivo del programa
	cout << "Este programa emula un control de acceso. Tiene tres intentos ";
	cout << "para acertar el password."<<endl<<endl;
	
	//Primer intento de digitar el password
	cout << "Password? ";
	cin >> passw_digitado;
	
	/*
	passw_digitado.compare(passw_control) compara las cadenas de passw_digitado 
	con passw_control para revisar si son iguales. passw_digitado.compare() 
	compara el contenido de passw_digitado con cualquier cadena que se 
	introduzca en los par�ntesis.
	Esta funci�n de comparaci�n retorna 0 si son iguales. 
	Por eso en el if se realiza la comparaci�n. Si lo que retorna es igual a 0, 
	entonces son iguales.
	Este ejemplo utiliza estructuras selectivas anidadas (una dentro de otra).
	*/
	if(passw_digitado.compare(passw_control) == 0){ //1er if
		cout << "Acceso concedido"<<endl;
	}//cierra 1er if
	else{ //1er else
		cout << "Error en el password. Lleva 1 intento fallido." << endl;
		//Segundo intento de digitar el password
		cout << "Password? ";
		cin >> passw_digitado;
		if(passw_digitado.compare(passw_control) == 0){ //2do if
			cout << "Acceso concedido"<<endl;
		} //cierra 2do if
		else{ //2do else
			cout << "Error en el password. Lleva 2 intento fallido." << endl;
			//Tercer intento de digitar el password
			cout << "Password? ";
			cin >> passw_digitado;
			if(passw_digitado.compare(passw_control) == 0){ //3er if
				cout << "Acceso concedido"<<endl;
			} //cierra 3er if
			else{ //3er else
				cout << "Ha errado 3 veces. Acceso denegado." << endl;
			} //Cierra el 3er else
		} //Cierra el 2o else
	} //Cierra el 1er else

	cin.get();
	
	return 0;
}
