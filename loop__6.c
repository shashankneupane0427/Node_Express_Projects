#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,result;
    printf("Input the number for displaying its table\t");
    scanf("%d",&n);
    for(i=1;i<=10;i=i+1)
    {
        result=n*i;
        printf("%d X %d = %d\n",n,i,result);
    }
    return 0;
}