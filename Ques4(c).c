#include <stdio.h>
#include <string.h>

int main() {
    char firstString[100], secondString[100];

  
    printf("Enter the first string: ");
    scanf("%s", firstString);

    printf("Enter the second string: ");
    scanf("%s", secondString);

   
    strcat(firstString, secondString);


    printf("Concatenated string: %s\n", firstString);

    return 0;
}
