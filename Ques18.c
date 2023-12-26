#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int divide(int a, int b);
int multiply(int a, int b);

int main() {
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    int (*operations[4])(int, int) = {add, subtract, divide, multiply};

    // Display menu for arithmetic operations
    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
    
        int result = operations[choice - 1](num1, num2);

 
        printf("Result: %d\n", result);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int multiply(int a, int b) {
    return a * b;
}
