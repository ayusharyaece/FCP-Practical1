#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

 
    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Length of the string: %zu\n", strlen(inputString));

    return 0;
}
