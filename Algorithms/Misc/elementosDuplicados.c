#include<stdio.h>


int tracking[10];

int isVisited(int c){

    int visited = 0;

    for (int i = 0; i < 10; i++)
    {
        if(tracking[i] == c){
            visited = 1;
        }    
        
    }

    return visited;
    

}

int main(int argc, char const *argv[])
{

    int b[10] = {1,1,2,3,4,5,5,6,7,8};

    for (int i = 0; i < 10; i++)
    {
        printf("%d", b[i]);
    }
    
    int c = 0;
    int temp = 0;
    int tC = 0;
    printf("Finding duplicates \n");
    for (int i = 0; i < 10; i++)
    {

        if(!isVisited(b[i])){
            temp = b[i];
            for (int j = 0; j < 10; j++)
            {
                if(b[j] == temp){
                    c++;
                }
            }
        }else{
            continue;
        }
       if(c>1){
        printf("%d, tiene %d duplicados", temp, c);
       }
        c = 0;

        tracking[tC++] = temp; 
        
    }
    

    return 0;
}
