#include <stdio.h>
#include <stdlib.h>

int conteoPar(int,int,int);

int main()
{
    int impares;
    impares=conteoPar(0,100,2);
    printf("hay =%d impares\n",impares);

    for(int i=0+1;i<101;i++)
    {
        if((i%2)!=0)
        {
           printf("%d ,",i);
        }
    }

    return 0;
}

int conteoPar(int inicio,int fin,int modo)
{
    int pares=0;
    int i;
    if(modo==1)//pares
    {
        for(i=inicio+1;i<=fin;i++)
        {
            if((i%2)==0)
            {
                pares=pares+1;
            }
        }
    }
    if(modo==2)//impares
    {
        for(i=inicio+1;i<=fin;i++)
        {
            if((i%2)!=0)
            {
                pares=pares+1;
            }
        }
    }
    return pares;
}



/*
for(int i=0;i<101;i++)
    {
        if((i%2)==0)
        {
           printf("%d,",i);
        }else
        {
            impares=impares+1;
            printf("%d ,",i);
        }
    }

*/
