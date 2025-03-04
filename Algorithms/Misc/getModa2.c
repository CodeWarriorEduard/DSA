#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    int c[11] = {2, 1,1,2,3,1,1,1,1,2, 5};
    int count[11] = {0}; // Array para contar ocurrencias.
    int size = sizeof(c)/sizeof(c[0]);
    int max = 0, moda;
    int vc[size];
    int counter = 0;
    int numActual = c[0];
    int tupleCounter = 0;
    int vc_i = 0;


    for (int i = 0; i < 11; i++)
    {
        printf("[%d] ", c[i]);
    }
    
    for (int i = 0; i < 11; i++)
    {
        count[c[i]]++; // Contar incidencias de cada elemento dentro del array...
    }

    printf("\n");
    
    for (int i = 0; i < 11; i++)
    {
        printf("%d",count[i]);
    }

    for (int i = 0; i < 11; i++)
    {
        if(count[c[i]]>max){
            max = count[c[i]];
            moda = c[i];
        }
    }

    int multipleModa = 0;
    for (int i = 0; i < 11; i++)
    {
        if (count[c[i]]==max && c[i] !=moda)
        {
            multipleModa;
        }
        
    }
    

    printf("\n Moda %d", moda);
    return EXIT_SUCCESS;
}