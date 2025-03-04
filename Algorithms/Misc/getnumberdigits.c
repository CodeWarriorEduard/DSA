#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<stdbool.h>

int countDigits(int x){
    int i = 1;
    int j = 0;
    while (x%i!=x)
    {
        i = i * 10;
        j++;
    }
    if(x<=0){
        return j+1;
    }
    return j;     
}


bool isPalindrome(int x){
    int ArraySize = countDigits(x);
    char digits[ArraySize], digitsReverse[ArraySize];
    int decimalPart=1, intPart=1,i=0, r;


    // Improve this.
    if(x<0){
        
        while(i!=ArraySize)
        {
            r = (int) x%10 *-1;
            x=x/10;
            digits[i] = r;
            i++;
        } 
        digits[ArraySize - 1] = '-';
    }else{
        while(i!=ArraySize){
            r = (int) x%10;
            x=x/10;
            digits[i] = r;
            i++;
        } 
    }
   

    i=0;
    // Reverse the original array.
    while(i!=ArraySize){
        digitsReverse[i] = digits[ArraySize-i-1];
        i++;
    }

    i=0;
    // Print.
    while(i!=ArraySize){
        printf("{%d}", digits[i]);
        // printf("{%d}", digitsReverse[i]);
        i++;
    }
     i=0;
    // Print.
    while(i!=ArraySize){
        printf("{%d}", digitsReverse[i]);
        i++;
    }
    // Compare the array;
    i=0;
    while(i!=ArraySize){
        if(digits[i] != digitsReverse[i]){
            return false;
        }
        i++;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int numberToAnalyze=12345678910;
    bool a = isPalindrome(numberToAnalyze);
    if(a==0){
        printf("NO ES PALINDROMO \n");
    }else{
        printf("ES PALINDROMO \n");
    }
    return 0;
}
