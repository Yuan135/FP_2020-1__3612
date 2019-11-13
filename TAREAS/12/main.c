#include <stdio.h>
#include <stdlib.h>
//reciba n personas
int Persona(int N){
//no hay persona no hay saludos
if(N==0){
return N;
}
int z=N;
//la suma de saludos va a ser la suma de los numeros antes que n 
z=Persona(N-1)+(z-1);
//regresar al numero anterior hasta llegar a 0
return z;
}
int main(int argc, char*argv[]){
int x=atoi(argv[1]);
printf("%d\n", Persona(x));
return 0;
}