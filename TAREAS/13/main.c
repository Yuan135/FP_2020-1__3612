#include <stdlib.h>
#include <stdio.h>

void burbuja(int *item, int cont){
    int i, j, ordenado ;
    int temp;
//correr una lista
    for (i = 1; i < cont; i++){
//Hace la funcion de apuntadores uno apunta el numero y otro ve el numero si es mayor o menor  
        for (j = cont; j > i; j--){
            ordenado = 1;
            if (item[j-1] > item[j]){
                temp = item[j-1];
                item[j-1] = item[j];
                item[j] = temp;
                ordenado++;
            }
        }
        //la lista de este ordenado ya no es necesario seguir recorriendo el arreglo para hacer comparaciones
        if (ordenado == 0);
        break;
    }
}
int main(int argc, char*argv[]){
    //tamaño del arreglo
    int arreglo[argc];
    for (int i = 1; i < argc; i++){
        double x=atof(argv[i]);
        arreglo[i]=x;
    //hacemos el llamado a la funcion burbuja, a la cual le pasamos como parametros el arreglo y el tamaño  
}
burbuja(arreglo, argc-1);
    //mostramos el arreglo
     for (int i = 1; i < argc; i++){
	 printf("%d  ", arreglo[i]);}

} 