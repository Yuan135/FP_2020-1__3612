#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[]){
	//declarar variables
	int x;
	int y;
	float z=1;
	//de char a float
	x=atof(argu[1]);
	y=atof(argu[2]);
	//correr la lista
	for (int i=0; i<y; i++){
		//segun la pregunta que un numero elevado a n, significa que se multiplica n veces el mismo numero
		z=z*x;
	}
	//imprimir resultado
	printf("%.2f\n",z);
	return 0;
} 