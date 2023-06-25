#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStructArray(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    const int numStudents = 5;
    struct Student students[numStudents];

    // Assuming the array of structures is initialized with data...

    displayStructArray(students, numStudents);

    return 0;
}
