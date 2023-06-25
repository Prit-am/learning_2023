#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(const struct Student* students, int numStudents, const char* name) {
    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    const int numStudents = 5;
    struct Student students[numStudents] = {
        {1001, "Aron", 85.5},
        {1002, "John", 92.0},
        {1003, "Emma", 78.2},
        {1004, "Sophia", 96.7},
        {1005, "James", 89.1}
    };

    const char* searchName = "Emma";

    searchByName(students, numStudents, searchName);

    return 0;
}
