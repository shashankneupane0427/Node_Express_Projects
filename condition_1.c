#include<stdio.h>
int main(){
    int i;
    for(i=5;i<=50;i++){
        if(i%2==0)
        continue;
        printf("%d",i);
    }
    printf("END");
    return 0;

}