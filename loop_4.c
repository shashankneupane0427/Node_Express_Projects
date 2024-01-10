#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum;
    float average;
    sum=0;
    printf("Enter 10 numbers:\n");
    for(i=1;i<=10;i++)
    {
        printf("Enter Number: %d \t",i);
        scanf("%d",&n);
         sum=sum+n;
    }
    average=sum/10.0;
    printf("The sum of 10 no is: %d",sum);
    printf("The average of 10 no is: %f",average);

}