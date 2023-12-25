#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    do {
  
        printf("\nMath Operations Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exponentiation\n");
        printf("0. Exit\n");

        printf("Enter your choice (0-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;

                 case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;

       case 3: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;

              case 4: 
                  printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;

         case 5: 
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2f\n", result);
                break;

               case 0: 
                printf("Exiting the program. Goodbye!\n");
                break;

            default: 
                printf("Invalid choice. Please enter a number between 0 and 5.\n");
        }

    } while (choice != 0);

    return 0;
}
