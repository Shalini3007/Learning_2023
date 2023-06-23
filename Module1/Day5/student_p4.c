#include <stdio.h>
#include <stdlib.h>

//student data
struct Student {
    char name[50];
    int roll_no;
    int age;
};

int main() {
    int n;

    printf("Enter the total number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of n Student structures
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Read data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &(students[i].roll_no));
        printf("Enter age: ");
        scanf("%d", &(students[i].age));
    }

    // Display data for each student
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Age: %d\n", students[i].age);
    }

    free(students);

    return 0;
}