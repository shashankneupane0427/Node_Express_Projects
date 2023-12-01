#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 10, y = 15, temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d", x, y);
return 0;
}