#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int m, int n, int p, int q) {
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < q; ++j)
            for (int k = 0; k < n; ++k)
                result[i][j] += A[i][k] * B[k][j];
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int m, n, p, q;

    printf("Enter dimensions of the first matrix: ");
    scanf("%d %d", &m, &n);

    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &A[i][j]);

    printf("Enter dimensions of the second matrix: ");
    scanf("%d %d", &p, &q);

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < p; ++i)
        for (int j = 0; j < q; ++j)
            scanf("%d", &B[i][j]);

    if (n != p) {
        printf("Error: Matrices can't be multiplied due to incompatible dimensions.\n");
        return 1;
    }

    multiplyMatrices(A, B, result, m, n, p, q);

    printf("Result of matrix multiplication:\n");
    displayMatrix(result, m, q);

    return 0;
}
