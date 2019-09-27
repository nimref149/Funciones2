#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int numero2=2;
    int numero;
    char letra;
    char respuesta;   //getIntt(&numero,"ingrese numero","error",1,10);
    while(!(getCharr(&letra,"Ingrese letra[A][B][C]: ","Error ",'a','c')));
    printf("%c\n",letra);

    while(!(getStringNumeros("Ingrese numero entre 10 y 50: ",&numero,10,50)));
    printf("%d",numero);

    /*
    numero=getInt2("Ingrese numero",1,7);
    if(numero!=numero2)
    {
        printf("Error");
    }

    //respuesta=getCharr(&letra,"Ingrese letra Entre a y b","Error",'a','b');
    //printf("La letra ingresada es %c",letra);
*/

        return 0;
}
