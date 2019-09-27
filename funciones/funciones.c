#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.h"
#include <time.h>
#include <ctype.h>
/**
isalpha() //Valida si es una letra
isdigit() //Valida si es un numero
isupper() //valida si es mayuscula
islower() //valida si es minuscula
toupper();para pasar el contenido de una variable tipo char ( char letra ) o array de cadena ( char cad[20] ), a mayusculas.
tolower();para pasar el contenido de una variable tipo char ( char letra ) o array de cadena ( char cad[20] ), a minusculas.
*/
void getIntt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)//con rango sin validacion de letra
{
    printf("%s\n",message);
    scanf("%d",input);

    while(*input<lowLimit || *input>hiLimit)
    {
        printf("%s\n",eMessage);
        scanf("%d",input);
    }

}
int getInt2(char message[],int lowLimit, int hiLimit)//con rango sin validacion de letra
{
    int numero;
    int numero2;
    printf("%s\n",message);
    scanf("%d",&numero);

    numero2=esNumerico(numero);
    printf("el numero es %d",numero2);
    while(numero<lowLimit || numero>hiLimit)
    {
        printf("Error, reingrese: ");
        scanf("%d",&numero);
    }
    return numero;
}
void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}
/*
int getIntt(int* input, message[],char eMessage[], int lowLimit, int hiLimit)//con rango
{
    printf("%s\n",message);
    scanf("%d",input);
    if(input<lowLimit || input>hiLimit)
    {
        printf("%s",eMessage);
        return 0;
    }
    return 1;
}
*/
int getFloatt(float* input,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    printf("%s\n",message);
    scanf("%f",input);
    if(*input<lowLimit || *input>hiLimit)
    {
        printf("%s",eMessage);
        return 0;
    }
    return 1;
}

int getCharr(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)//mejorado con validacion de letra y rango
{
    char auxInput;
    int retorno=0;
    printf("%s",message);
    fflush(stdin);
    scanf("%c",&auxInput);
    auxInput=tolower(auxInput);
    if((isalpha(auxInput))!=0)
    {
        if(auxInput<lowLimit || auxInput>hiLimit)
        {
            printf("%s.\n",eMessage);
        }
        else
        {
            *input=auxInput;
            retorno=1;
        }
    }
    else
    {
        printf("Error, Debe ingresar una letra.\n",eMessage);
    }
    return retorno;
}
/*
int getCharr(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)//mejorado
{

    //char auxInput;
    printf("%s\n",message);
    fflush(stdin);
    scanf("%c",input);
    if(*input<lowLimit || *input>hiLimit)
    {
        printf("%s",eMessage);
        return 0;
    }
    return 1;

}
*/

int getStringg(char* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{

    printf("%s\n",message);
    gets(input);

    if(strlen(input)<lowLimit || strlen(input)>hiLimit)
    {
        printf("%s",eMessage);
        return 0;
    }
    return 1;
}

int getInt(char mensaje[]){
int numero;
printf("%s",mensaje);
scanf("%d",&numero);
return numero;
}

float getFloat(char mensaje[]){
float numero;
printf("%s",mensaje);
scanf("%f",&numero);
return numero;
}

char getChar(char mensaje[]){
char letra;
printf("%s",mensaje);
scanf("%c",&letra);
return letra;
}

char getNumeroAleatorio(int desde, int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}


int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

//getStringNumeros
int getInt3(char mensaje[],int* input,int lowLimit,int hiLimit)//usa 2 funciones,esNumerico,getstring y nada mas, es mejor que getInt.con validacion de rango y numero
{
    char aux[256];
    int auxNumero;
    getString(mensaje,aux);
    int retorno=0;
    if(esNumerico(aux))
    {
        auxNumero=atoi(aux);
        if(auxNumero<lowLimit || auxNumero>hiLimit)
        {
            printf("Error, fuera de rango\n");
        }
        else
        {
            *input=atoi(aux);
            retorno=1;
        }
    }
    else
    {
        printf("Error, solo se permite valor numerico\n");
    }
    return retorno;
}































