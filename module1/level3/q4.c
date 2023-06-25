#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sortStructArray(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the positions of students[j] and students[j + 1]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

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
    struct Student students[numStudents] = {
        {1001, "Aron", 85.5},
        {1002, "John", 92.0},
        {1003, "Emma", 78.2},
        {1004, "Sophia", 96.7},
        {1005, "James", 89.1}
    };

    printf("Before sorting:\n");
    displayStructArray(students, numStudents);

    sortStructArray(students, numStudents);

    printf("After sorting:\n");
    displayStructArray(students, numStudents);

    return 0;
}
