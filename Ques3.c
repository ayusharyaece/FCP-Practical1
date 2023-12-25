#include <stdio.h>

void reverseString(char str[]) {
    int start = 0, end = 0;

    // Find the end of the string
    while (str[end] != '\0') {
        end++;
    }
    end--;

    // Reverse the string
    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move start and end pointers towards each other
        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Reverse the string
    reverseString(inputString);

    // Display the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}
