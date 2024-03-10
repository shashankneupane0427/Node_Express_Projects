//WAP to enter a number and display whether it is positive or negative
#include<stdio.h>
int main(){
    int n;
    printf("Enter any numer\n");
    scanf("%d",&n);
    if(n>0){
        printf("The number %d is positive",n);
    }
    else if(n==0){
      printf("The number %d is nuteral",n);
    }
    else{
        printf("The number %d is negative",n);
    }
    return 0;
}