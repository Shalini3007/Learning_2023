#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sort_Array(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swaping the elements (sorting)
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void display_Students_array(const struct Student *students, int size)
{
   for (int i = 0; i < size; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      printf("Roll No: %d\n", students[i].rollno);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %.1f\n\n", students[i].marks);
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
    for (int i = 0; i <size; i++) {
        printf("Enter the student %d details (Rollno Name Marks): ", i + 1);
        scanf("%d %s %f", &(students[i].rollno), students[i].name, &(students[i].marks));
        getchar();
    }

    printf("Array of the Students (Before Sorting ):\n");
    display_Students_array(students, size);

    sort_Array(students, size);

    printf("Array of the Students (After Sorting in decending order):\n");
    display_Students_array(students, size);

    free(students);

    return 0;
}