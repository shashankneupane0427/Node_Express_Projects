#include <stdio.h>

int main()
 {

    int number, factorial;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
    
        factorial = 1;


        while (number > 0) {
            factorial *= number;
            number--;
        }

        printf("Factorial: %d\n", factorial);
    }

    return 0;
}
