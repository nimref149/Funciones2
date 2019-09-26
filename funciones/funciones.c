#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.h"
#include <time.h>
void getIntt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)//con rango
{
    printf("%s\n",message);
    scanf("%d",input);
    while(*input<lowLimit || *input>hiLimit)
    {
        printf("%s\n",eMessage);
        scanf("%d",input);
    }
}
int getInt2(char message[],int lowLimit, int hiLimit)//con rango
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

int getCharr(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)
{

    printf("%s\n",message);
    scanf("%c",input);
    if(*input<lowLimit || *input>hiLimit)
    {
        printf("%s",eMessage);
        return 0;
    }
    return 1;

}
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


































