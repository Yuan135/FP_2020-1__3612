#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argu[]){
	//el que tiene que imprimir
	int resultado;
	//la lista que se guardan los valores
	int argui[argc];
	//necesita dos for para excluir el argu[i]
	for(int i=1; i<argc; i++){
		resultado=1
		//el otro for  hara la operacion sin excluir ninguno
		for(int j=1; j<argc; j++){
			//copia la lista argu y los variables son enteros
			argui[j]=atoi(argu[j]);
			//sacar el resultado 
			resultado=resultado*argui[j];
		}
		resultado=resultado/argui[i];
		printf("%i\n", resultado);
	}
	return 0;
}