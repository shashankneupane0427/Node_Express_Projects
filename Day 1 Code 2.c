#include <stdio.h>

int main() {
    int num1, num2;
    float fraction;
    char character;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("You entered %d and %d\n", num1, num2);

    printf("Enter a decimal number: ");
    scanf("%f", &fraction);
    printf("You entered %f\n", fraction);

    printf("Enter a character: ");
    scanf(" %c", &character);
    printf("You entered %c\n", character);

    return 0;
}
