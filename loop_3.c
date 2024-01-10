#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum;
    sum=0;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of natural number up to %d terms is: %d",n,sum);
    return 0;
}