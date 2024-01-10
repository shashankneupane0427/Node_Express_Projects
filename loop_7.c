#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,result;
    printf("Input upto the table number starting from 1:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            result=i*j;
            printf("%d X %d = %d,\n",i,j,result);
        }
        printf("\n");
    }
    return 0;
}