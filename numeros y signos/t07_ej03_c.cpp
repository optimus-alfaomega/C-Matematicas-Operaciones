/*
Autor: Miguel Dussán
*/

/*
Imprima todos los números impares entre el número 1 y el 200. De forma intercalada, 
uno del principio y uno del final. Ejemplo: 1,199,3,197,5,195,...
*/

#include <iostream>
	
using namespace std;

int main(){
	int cont_asc = 1; 					//contador ascendente
	int cont_desc = 200;				//contador descendente

	//Mensaje descriptivo
	cout << "Este programa imprime todos los numeros impares entre el numero ";
	cout<<"1 y el 200 de forma intercalada, uno del principio y uno del final.";
	cout<<" Ejemplo: 1,199,3,197,5,195,..."<<endl<<endl;
	
	/*
	Ciclo while. La condición es que el contador ascendente sea
	Menor o igual a 200. También se puede colocar que el contador descendente
	sea mayor o igual a 1, o ambas.
	*/
	
	while(cont_asc <=200){
		//Condición para el contador ascendente.
		//Si el número ascendente es impar.
		if(cont_asc % 2 != 0){
			cout << cont_asc <<" ";
		}
		//Condición para el contador descendente.
		//Si el número descendente es impar.
		if(cont_desc % 2 != 0){
			cout << cont_desc <<" ";
		}
		cont_asc=cont_asc+1;	//Incremento en uno
		//Operador unario de decremento en uno. Equivalente a: cont_desc = cont_desc - 1.
		cont_desc--;			
	}

	cin.get();
	
	return 0;
}
