//WAP TO INPUT AN INTEGER NUMBER AND CHECK WHETHER IT IS EVEN OR ODD
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("The number %d is even",n);
    }
    else{
        printf("The number %d is odd",n);
    }
    return 0;
}