#include<stdio.h>


int main(int argc, char const *argv[])
{
    int arr[6] = {9,2,6,3,7,8};

    for (int i = 0; i < 6/2; i++)
    {
        int temp = arr[i]; 
        arr[i] = arr[6-i-1];
        arr[6-i-1] = temp; 
    }


    printf("Array invertido \n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d", arr[i]);
    }
    
    


    return 0;
}
