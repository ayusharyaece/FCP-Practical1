#include <stdio.h>

void main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;

    printf("a. Increment a pointer: %d\n", *(++ptr));

    printf("b. Decrement a pointer: %d\n", *(--ptr));

    printf("c. Add an integer to a pointer: %d\n", *(ptr + 2));

    printf("d. Subtract an integer from a pointer: %d\n", *(ptr - 4));

    printf("e. Subtract two pointers: %d\n", ptr - arr);
}
