#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[]){
	//declarar variables
	float x;
	float y;
	float z;
	//de char a float
	x=atof(argu[1]);
	y=atof(argu[2]);
	//decimos que si x es igual a uno aplica el formulario de F° a c°
	if (x==1){
		z=(y-32)/1.8;
		printf("%.2f\n", z);
		return 0;
	}
	//decimos que si x es igual a cero aplica el formulario de c° a f°
	else if (x==0){
		z=32+(y*1.8);
		printf("%.2f\n", z);
		return 0;
	}
	return 0;
	}