/*
Autor: Miguel Dussán
*/

/*
Escriba un programa que determine el promedio de calificaciones de 15 estudiantes 
utilizando estructuras repetitivas.
*/

#include <iostream>
	
using namespace std;

int main(){
	int contador = 0;
	int calificacion = 0;
	float promedio = 0;
	
	//Mensaje descriptivo
	cout << "Este programa determina el promedio de calificaciones de 15 ";
	cout << "estudiantes utilizando estructuras repetitivas."<<endl<<endl;
	
	while(contador<15){
		cout << "Calificacion no. " << contador +1<<": ";
		cin >> calificacion;
		promedio = promedio + calificacion;
		contador = contador +1;
	}
	
	promedio = promedio / 15;
	
	cout << "El promedio de las calificaciones fue de " << promedio << endl;

	cin.get();
	
	return 0;
}
