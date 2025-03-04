#include<stdio.h>
#include<stdlib.h>



int main(int argc, char const *argv[])
{
    int m[10] = {23, 7, 45, 12, 98, 34, 67, 3, 15, 89};
  

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10-1; j++)
        {
            if(m[j] > m[j+1]){
                int temp = m[j];
                m[j] = m[j+1];
                m[j+1] = temp;
            }
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("[%d] ", m[i]);
    }
    
    



    return 0;
}
