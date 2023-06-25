#include <stdio.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitializeStructs(const char* inputString, struct Student* students, int numStudents) {
    const char* delimiter = " ";
    char* token;
    char* endPtr;

    for (int i = 0; i < numStudents; i++) {
        // Parse rollno
        token = strtok((i == 0) ? strdup(inputString) : NULL, delimiter);
        students[i].rollno = strtol(token, &endPtr, 10);

        // Parse name
        token = strtok(NULL, delimiter);
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';

        // Parse marks
        token = strtok(NULL, delimiter);
        students[i].marks = strtof(token, &endPtr);
    }
}

int main() {
    const char* inputString = "1001 Aron 100.00";
    const int numStudents = 1;
    struct Student students[numStudents];

    parseAndInitializeStructs(inputString, students, numStudents);

    // Access and print the parsed data
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
