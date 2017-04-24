#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"


int main()
{
    char nombre[21];
    int numerosL[5]={0};
    printf("escriba una palabra de 20 caracteres\n");
    fflush(stdin);
    scanf("%s",nombre);
    strlwr(nombre);
    numerosL[0]=rastreaLetra(nombre,21,'a');
    numerosL[1]=rastreaLetra(nombre,21,'e');
    numerosL[2]=rastreaLetra(nombre,21,'i');
    numerosL[3]=rastreaLetra(nombre,21,'o');
    numerosL[4]=rastreaLetra(nombre,21,'u');
    /*
    for(int i=0;i<20;i++)
    {
        if('a'==nombre[i])
        {
            numerosL[0]=numerosL[0]+1;
        }
    }
    for(int i=0;i<20;i++)
    {
        if('e'==nombre[i])
        {
            numerosL[1]=numerosL[1]+1;
        }
    }
    for(int i=0;i<20;i++)
    {
        if('i'==nombre[i])
        {
            numerosL[2]=numerosL[2]+1;
        }
    }
    for(int i=0;i<20;i++)
    {
        if('o'==nombre[i])
        {
            numerosL[3]=numerosL[3]+1;
        }
    }
    for(int i=0;i<20;i++)
    {
        if('u'==nombre[i])
        {
            numerosL[4]=numerosL[4]+1;
        }
    }
    */
    printf("%s\n",nombre);
    printf("cantidad de a =%d\n",numerosL[0]);
    printf("cantidad de e =%d\n",numerosL[1]);
    printf("cantidad de i =%d\n",numerosL[2]);
    printf("cantidad de o =%d\n",numerosL[3]);
    printf("cantidad de u =%d\n",numerosL[4]);

    return 0;
}
