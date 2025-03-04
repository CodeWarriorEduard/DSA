#include<stdio.h>
#include<stdlib.h>

typedef struct tuple{
    int key;
    int value;
}Tuple;

int isCounted(int *arr, int target, int n){
   

    for (int i = 0; i < n; i++)
    {
       if(arr[i]==target){
        return 1;
       }
    }
    
    return 0;
}


int main(int argc, char const *argv[])
{
    int c[11] = {2, 1,1,2,3,1,1,1,1,2, 5};

    int size = sizeof(c)/sizeof(c[0]);

    int vc[size];
    int counter = 0;
    int numActual = c[0];
    int tupleCounter = 0;
    int vc_i = 0;

    // Crear arreglo de tuplas ...

    Tuple tuples[size];

    for (int i = 0; i < size; i++)
    {
        tuples[i].key = 0;
        tuples[i].value = 0;
    }
    


    for (int i = 0; i < size; i++)
    { 
        if(isCounted(vc, c[i], size)==1){
            continue;
        }else{
            vc[vc_i] = c[i];
            numActual = c[i];
            vc_i++;   
        }
       
        for (int j = i; j < size; j++)
        {
            if(numActual == c[j]){
                counter++;
            }

        }

        tuples[tupleCounter].key = c[i];
        tuples[tupleCounter].value = counter;
        counter=0;
        tupleCounter++;
        
    }

    //

    for (int i = 0; i < tupleCounter; i++)
    {
        printf("(%d, %d)", tuples[i].key, tuples[i].value);
    }
    


    return 0;
}
