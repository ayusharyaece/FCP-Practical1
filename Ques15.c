#include <stdio.h>


int sumDiagonal(int matrix[10][10], int order) {
    int sum = 0;
    for (int i = 0; i < order; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int matrix[10][10];
    int order;


    printf("Enter the order of the square matrix: ");
    scanf("%d", &order);


    if (order <= 0 || order > 10) {
        printf("Invalid matrix order.\n");
        return 1;  // Exit with an error code
    }

   
    printf("Enter %d x %d matrix elements:\n", order, order);
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int diagonalSum = sumDiagonal(matrix, order);
    printf("Sum of diagonal elements: %d\n", diagonalSum);

    return 0;
}
