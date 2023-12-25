#include <stdio.h>


int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}


void displayFibonacci(int n) {
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;


    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);


    displayFibonacci(n);

    return 0;
}
