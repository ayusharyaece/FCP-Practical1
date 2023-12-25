#include <stdio.h>

void reverseString(char str[]) {
    int start = 0, end = 0;

    
    while (str[end] != '\0') {
        end++;
    }
    end--;


    while (start < end) {
      
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

      
        start++;
        end--;
    }
}

int main() {
    char inputString[100];


    printf("Enter a string: ");
    scanf("%s", inputString);


    reverseString(inputString);

   
    printf("Reversed string: %s\n", inputString);

    return 0;
}
