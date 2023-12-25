#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

   
    file = fopen("ayush.txt", "w");

    
    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

   
    printf("Enter data to write into the file:\n");
    fgets(data, sizeof(data), stdin);

  
    fprintf(file, "%s", data);

   
    fclose(file);

    printf("Data has been written to the file.\n");

    return 0;
}
