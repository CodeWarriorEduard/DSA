#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *f;
    f = fopen(argv[1], "r");

    if(f==NULL){
        perror("Error opening file");
        exit(1);
    }


    int size;
    

    return 0;
}
