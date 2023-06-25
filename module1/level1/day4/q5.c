#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void swapStudents(struct Student *student1, struct Student *student2) {
    struct Student temp;

    // Swap roll numbers
    temp.rollno = student1->rollno;
    student1->rollno = student2->rollno;
    student2->rollno = temp.rollno;

    // Swap names
    strcpy(temp.name, student1->name);
    strcpy(student1->name, student2->name);
    strcpy(student2->name, temp.name);

    // Swap marks
    temp.marks = student1->marks;
    student1->marks = student2->marks;
    student2->marks = temp.marks;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Roll No: ");
    scanf("%d", &(student1.rollno));
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Marks: ");
    scanf("%f", &(student1.marks));

    printf("\nEnter details for student 2:\n");
    printf("Roll No: ");
    scanf("%d", &(student2.rollno));
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Marks: ");
    scanf("%f", &(student2.marks));

    printf("\nBefore swapping:\n");
    printf("Student 1:\nRoll No: %d, Name: %s, Marks: %.2f\n", student1.rollno, student1.name, student1.marks);
    printf("Student 2:\nRoll No: %d, Name: %s, Marks: %.2f\n", student2.rollno, student2.name, student2.marks);

    // Swap the fields of the two structures
    swapStudents(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\nRoll No: %d, Name: %s, Marks: %.2f\n", student1.rollno, student1.name, student1.marks);
    printf("Student 2:\nRoll No: %d, Name: %s, Marks: %.2f\n", student2.rollno, student2.name, student2.marks);

    return 0;
}
