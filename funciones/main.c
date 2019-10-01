#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int numero2=2;
    int numero;
    char letra;

    int r;
    char respuesta;   //getIntt(&numero,"ingrese numero","error",1,10);


    while((getCharValid(&letra,"Ingrese letra[A][B][C]: ","Error ",'a','c'))==-1);
    printf("%c\n",letra);

    r=confirm();
    if(r=0){
    printf("Ingreso n");
    }

/*
    while(!(getStringNumeros("Ingrese numero entre 10 y 50: ",&numero,10,50)));
    printf("%d",numero);
*/


        return 0;
}









