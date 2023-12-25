#include <stdio.h>

unsigned long long factorial(int num) {
    return (num == 0 || num == 1) ? 1 : num * factorial(num - 1);
}


unsigned long long nCr(int n, int r) {
    return (r >= 0 && r <= n) ? factorial(n) / (factorial(r) * factorial(n - r)) : 0;
}

int main() {
    int n, r;

   
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

   
    printf("%dC%d is: %llu\n", n, r, nCr(n, r));

    return 0;
}
