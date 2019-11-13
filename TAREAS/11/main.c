#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//declarar los variables
double Raiz(double n, double tolerancia, double candidato){
double promedio;
double div;
//iteracion de la funcion
while(fabs(div-candidato)>tolerancia){
div=n/candidato;
promedio=(div+candidato)/2;
candidato=promedio;
}
//para tener los valores mas cercanos
long double resultado= candidato;
return resultado;
}
int main(int arg, char*argv[]){
//asignan los valores 
double x= atof(argv[1]);
double y= atof(argv[2]);
double z= atof(argv[3]);
printf("%lf\n",Raiz(x,y,z));
return 0;
}
