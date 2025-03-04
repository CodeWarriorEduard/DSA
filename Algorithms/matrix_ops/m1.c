#include<stdio.h>


int main(int argc, char const *argv[])
{
     int ma[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            printf("[%d]\t", ma[i][j]);
        }
        printf("\n");
    }
    
    printf("recorrer la diagonal de la matriz \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            if(i==j){
            printf("%d %d", i, j);
            printf("[%d]\t", ma[i][j]);
            }
        }
        printf("\n");
    }

    printf("recorrer la matriz en espiral \n");

    // Limites
    int top = 0, down = 2, left = 0, right = 2;
    
    // Variable dirección que llevara la "batuta"

    int dir = 0;

    //
    while(top<=down && left <=right){
        //Superior.
        if(dir == 0){
            for (int i = left; i <=right; i++)
            {
                printf("%d", ma[top][i]);
            }
            top +=1;
            
        }else if(dir == 1){
            for (int i = top; i <=down; i++)
            {
                printf("%d", ma[i][right]);
            }

            right -= 1;
            
        }else if (dir == 2)
        {
            for (int i = right; i >=left; i--)
            {
                printf("%d", ma[down][i]);
            }
            down -= 1;
        }else{
            for (int i = down; i >=top; i--)
            {
                printf("%d", ma[i][left]);
            }
            left+=1;
        }

        dir = (dir+1)%4;
        

    }

    printf("\n");



    return 0;
}
