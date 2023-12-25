#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("ayush.txt", "r");


    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

 
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    fclose(file);

    return 0;
}
