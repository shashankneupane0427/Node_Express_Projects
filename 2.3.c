//WAP to find the loss or profit percenta when cp and sp are given
#include<stdio.h>
int main(){
    float cp,sp,p,l,pp,lp;
    printf("Enter cp and sp\n");
    scanf("%f%f",&cp,&sp);
    if(cp>sp){
        l=((cp-sp)/cp);
        lp=l*100;
        printf("Loss percentage is %f\n",lp);
    }
    else if(sp>cp){
        p=((sp-cp)/cp);
        pp=p*100;
        printf("Profit percentage is %f\n",pp);
    }
    return 0;
}