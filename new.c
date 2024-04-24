#include<stdio.h>
int main(){
    int age = 32;
    int *ptr = &age;
    int _age = *ptr;
    int wow = 9;

    printf("%d",_age);
    return 0;
}