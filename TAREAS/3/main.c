#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argu[]){
	float a, b, suma, resta, multiplicación, división;
	a=atof(argu[1]);
	b=atof(argu[2]);
	suma=a+b;
	resta=a-b;
	multiplicación=a*b;
	división=a/b;
	printf("la suma es:%.2f\n", suma);
	printf("la resta es:%.2f\n", resta);
	printf("la multiplicación es:%.2f\n", multiplicación);
	printf("la división es:%.2f\n", división);
	return 0;
	
}