#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
   int ma[10][10] = {
    {5, 3, 8, 2, 9, 1, 7, 6, 4, 2},
    {4, 6, 2, 7, 5, 3, 8, 9, 1, 5},
    {9, 2, 8, 3, 6, 4, 5, 1, 7, 3},
    {1, 7, 4, 9, 2, 8, 6, 2, 5, 7},
    {6, 5, 3, 1, 7, 4, 9, 8, 2, 6},
    {3, 8, 1, 6, 4, 5, 2, 3, 9, 4},
    {2, 9, 5, 4, 3, 7, 1, 6, 8, 2},
    {7, 1, 9, 8, 6, 2, 4, 5, 3, 9},
    {8, 4, 6, 5, 1, 9, 3, 7, 2, 1},
    {9, 2, 7, 3, 8, 6, 5, 4, 1, 10}
};




    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <10; j++)
        {
            printf("[%d]\t", ma[i][j]);
        }
        printf("\n");
    }
    
    printf("recorrer la diagonal de la matriz \n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <10; j++)
        {
            if(i==j){
            printf("[%d]\t", ma[i][j]);
            }
        }
        printf("\n");
    }

    printf("recorrer la diagonal superior de la matriz \n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j <10; j++)
        {
          
            printf("[%d]\t", ma[i][j]);
            
        }
        printf("\n");
    }


    printf("recorrer la diagonal inferior de la matriz \n");

    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j <i; j++)
        {
          
            printf("[%d]\t", ma[i][j]);
            
        }
        printf("\n");
    }




    return EXIT_SUCCESS;
}
