#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char ch;

    // Get the source file name from the user
    printf("Enter the source file name: ");
    scanf("%s", sourceFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    // Get the destination file name from the user
    printf("Enter the destination file name: ");
    scanf("%s", destinationFilename);

    // Open the destination file in write mode
    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
