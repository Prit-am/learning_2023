#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void copyFile(const char* sourceFilename, const char* destinationFilename, int caseOption) {
    FILE* sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return;
    }

    FILE* destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return;
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (caseOption == 1) {
            fputc(toupper(ch), destinationFile);  // Convert to upper case
        } else if (caseOption == 2) {
            fputc(tolower(ch), destinationFile);  // Convert to lower case
        } else if (caseOption == 3) {
            fputc(toupper(ch), destinationFile);  // Convert to purely upper case
        } else {
            fputc(ch, destinationFile);  // Normal copy
        }
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp [option] source_file destination_file\n");
        return 1;
    }

    int caseOption = 0;
    if (argc >= 4) {
        if (strcmp(argv[1], "-s") == 0) {
            caseOption = 3;  // Purely upper case
        } else if (strcmp(argv[1], "-l") == 0) {
            caseOption = 2;  // Lower case
        } else if (strcmp(argv[1], "-u") == 0) {
            caseOption = 1;  // Upper case
        }
    }

    const char* sourceFilename = argv[argc - 2];
    const char* destinationFilename = argv[argc - 1];

    copyFile(sourceFilename, destinationFilename, caseOption);

    return 0;
}
