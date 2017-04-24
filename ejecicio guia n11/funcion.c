#include "funcion.h"


int rastreaLetra(char string[],int tamanio,char letra)
{
    int contador=0;
    for(int i=0;i<tamanio-1;i++)
    {
        if(letra==string[i])
        {
            contador=contador+1;
        }
    }
    return contador;
}
