#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum;
    sum=0;
    for(i=1;i<=100;i++)
    {
        sum=sum+i;
    }
    printf("The sum is %d",sum);
    return 0;
}