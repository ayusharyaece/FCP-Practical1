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
    int arr1[3][3] = {{5, 7, 7}, {9, 4, 1}, {6, 9, 1}};
    int arr2[3][3] = {{5, 1, 4}, {8, 9, 7}, {3, 1, 7}};
    int result[3][3];

    addArrays(r, c, arr1, arr2, result);

    displayArray(r, c, arr1);
    displayArray(r, c, arr2);
    displayArray(r, c, result);

    return 0;
}
