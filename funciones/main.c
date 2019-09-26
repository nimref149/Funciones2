#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int numero2=2;
    int numero;
    //getIntt(&numero,"ingrese numero","error",1,10);
    numero=getInt2("Ingrese numero",1,7);
    if(numero!=numero2){
    printf("Error");
    }
    return 0;
}
