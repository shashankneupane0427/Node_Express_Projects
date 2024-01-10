#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,cube;
    printf("Input number of terms:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cube=i*i*i;
        printf("Number is: %d and cube of %d is: %d\n",i,i,cube);
    }
     
    return 0;
}