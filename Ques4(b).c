#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Calculate and display the length of the string
    printf("Length of the string: %zu\n", strlen(inputString));

    return 0;
}
