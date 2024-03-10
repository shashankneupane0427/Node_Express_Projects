// WAP to enter a three digit number and check if it is palindrome or not. Plaindrome is a number whose reverse is exactly the original number
// 121/100=1 p
// 121%100 = 21 q
// 21/10 = 2; r
// 21%10 = 1; s 
# include<stdio.h>
int main(){
    int n, p,q,r,s;
    printf("Enter a number\n");
    scanf("%d",&n);
    p=n/100;//1st
    q=n%100;
    r= q/10;//2nd
    s=q%10; //3rd
    if(s==p && r==r){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;
}