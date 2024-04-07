#include<stdio.h>
    int sum(int a, int b){
      return a+b;
    }
    int dif(int a, int b){
      return a-b;
    }
    int mul(int a, int b){
      return a*b;
    }
    float div(int a, int b){
      return a/b;
    }

int main(){
  char op;
  int a,b;
    printf("Enter operator,a,b\n");
    scanf("%c%d%d",&op,&a,&b);
      switch(op){
        case '+': printf("%d", sum(a,b));
        break;
        case '-': printf("%d", dif(a,b));
        break;
        case '*': printf("%d", mul(a,b));
        break;
        case '/': printf("%f", div(a,b));
        break;
        default: printf("Enter valid input");
      }
  return 0;
}