#include<stdio.h>

int main()
{
    int i = 10;   
    do 
    {
        printf("i = %d\n",i);
        i = i-1;    
    }
    while(i > 0);
    
    printf("\nThe value of i  is %d\n\n", i);
    return 0;
}