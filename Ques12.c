#include <stdio.h>


int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

 
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        
        printf("Factorial of %d = %d\n", num, factorial(num));
    }

    return 0;
}
