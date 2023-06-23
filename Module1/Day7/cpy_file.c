#include <stdio.h>

int main() {
    FILE* sourceFile;
    FILE* destinationFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("src1.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Error creating destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}