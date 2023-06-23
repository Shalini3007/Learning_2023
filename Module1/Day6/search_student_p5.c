#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void search_Array(const struct Student* students, int size, const char* searchName) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student Not Found\n");
    }
}

int main() {
    int size;

    printf("Enter the no of students: ");
    scanf("%d", &size);
    getchar();
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < size; i++) {
        printf("Enter the student %d details (Rollno Name Marks): ", i + 1);
        scanf("%d %s %f", &(students[i].rollno), students[i].name, &(students[i].marks));
        getchar();
    }

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    search_Array(students, size, searchName);

    free(students);

    return 0;
}