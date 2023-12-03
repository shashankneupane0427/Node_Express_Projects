#include<stdio.h>
void main()
{
   int n;
   long int fact = 1;
   printf("Enter the number: ");
   scanf("%d" , &n);
   int i = n;
   while(i) {
       fact = fact * i;
       i--;
   }
   printf("Factorial of %d is %ld", n , fact);
}