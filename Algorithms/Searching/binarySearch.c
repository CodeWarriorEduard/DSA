#include<stdio.h>
#include<stdlib.h>

int binarySearch(int *a, int target, int start, int end){

    if(start > end){
        return -1;
    }

    int middle = start + (end - start)/2 ;

    if(a[middle] == target){
        return middle;
    }


    if(a[middle] > target){
        return binarySearch(a,target,start, middle-1);
    }

    return binarySearch(a,target,middle+1, end);

}


int main(int argc, char const *argv[])
{
    int m[10] = {1,2,3,4,5,6,7,8,9,10};
    int target = 2;
    int size = sizeof(m)/sizeof(m[0]);


    int a = binarySearch(m, target, 0, size);

    printf("%d", a);



    return 0;
}
