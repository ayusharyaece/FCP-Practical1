#include <stdio.h>

void addArrays(int r, int c, int a[r][c], int b[r][c], int res[r][c]) {
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            res[i][j] = a[i][j] + b[i][j];
}

void displayArray(int r, int c, int arr[r][c]) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
}

int main() {
    int r = 3, c = 3;
    int arr1[3][3] = {{1, 3, 4}, {3, 1, 5}, {2, 4, 5}};
    int arr2[3][3] = {{4, 1, 3}, {1, 2, 4}, {3, 2, 1}};
    int result[3][3];

    addArrays(r, c, arr1, arr2, result);

    displayArray(r, c, arr1);
    displayArray(r, c, arr2);
    displayArray(r, c, result);

    return 0;
}
