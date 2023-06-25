#include <stdio.h>

#define MAX_LINE_LENGTH 100

int main() {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];

    // Read and print each line from the file
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
